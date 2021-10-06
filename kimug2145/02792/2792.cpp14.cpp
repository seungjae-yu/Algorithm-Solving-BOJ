#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll N, M, inp[300003];

int main() {
	scanf("%lld %lld", &N, &M);
	for (int i = 0; i < M; i++) scanf("%lld", &inp[i]);

	ll left = 1;
	ll right = *max_element(inp, inp + M);
	ll ans = right;

	while (left <= right) {
		ll mid = (left + right) / 2;
		ll cnt = 0;

		for (int i = 0; i < M; i++) {
			cnt += inp[i] / mid;
			if (inp[i] % mid != 0) cnt++;
		}

		if (cnt <= N) {
			right = mid - 1;
			ans = min(ans, mid);
		}
		else left = mid + 1;
	}
	cout << ans;
}