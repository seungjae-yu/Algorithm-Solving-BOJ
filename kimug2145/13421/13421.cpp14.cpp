#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;

typedef long long ll;
ll inp[4][2];

const ll INF = LLONG_MAX;

ll dist(ll x1, ll x2, ll y1, ll y2) {
	return abs(x1 - x2) + abs(y1 - y2);
}

ll func(ll l) {
	ll ret = INF;
	ll cmp[4][2] = { l,l,l,-l,-l,-l,-l,l };
	int idx[4] = { 0,1,2,3 };

	do {
		ll cc = 0;
		for (int i = 0; i < 4; i++) {
			cc += dist(inp[i][0], cmp[idx[i]][0], inp[i][1], cmp[idx[i]][1]);
		}
		ret = min(cc, ret);
	} while (next_permutation(&idx[0], &idx[4]));
	return ret;
}

int main() {

	for (int i = 0; i < 4; i++) scanf("%lld %lld", &inp[i][0], &inp[i][1]);

	ll ans = 0;
	ll llength = INF;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			ll now = abs(inp[i][j]);
			ll tmp = func(now);
			if (tmp <= llength) {
				if (tmp == llength) ans = max(ans, now);
				else ans = now;
				llength = tmp;
			}
		}
	}
	if (ans == 0) cout << 1;
	else cout << ans * 2;
}