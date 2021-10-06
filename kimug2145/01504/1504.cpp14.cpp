#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
#include <climits>

using namespace std;

const int long long INF = LLONG_MAX;
typedef long long ll;
int N, E, a, b, c, p1, p2;

bool chk[801];
ll dist[801];
vector < pair< ll, ll > > v[801];
priority_queue< pair < ll, ll > > pq; // cost, to

ll dis(int st_pos, int end_pos) {

	memset(chk, 0, sizeof(chk));

	for (int i = 1; i <= N; i++)
		dist[i] = INF;

	dist[st_pos] = 0;

	pq.push(make_pair(0, st_pos)); // 시작지점은 0 cost

	while (!pq.empty()) {

		pair < ll, ll > temp = pq.top(); pq.pop();

		ll to = temp.second;
		ll cost = -temp.first;

		if (chk[to]) continue;

		chk[to] = true;

		int sz = v[to].size();

		for (int i = 0; i < sz; i++) {

			ll tto = v[to][i].first;
			ll tcost = v[to][i].second;

			if (dist[tto] > cost + tcost) {
				dist[tto] = cost + tcost;
				pq.push(make_pair(-dist[tto], tto));
			}
		}
	}

	return dist[end_pos];
}

int main() {

	scanf("%d %d", &N, &E);

	for (int i = 0; i < E; i++) {
		scanf("%d %d %d", &a, &b, &c);
		v[a].push_back(make_pair(b, c)); //b는 갈곳 c는 cost
		v[b].push_back(make_pair(a, c));
	}

	scanf("%d %d", &p1, &p2);
	
	ll ans;
	ll d1 = dis(1, p1), d2 = dis(p1, p2) ,d3 = dis(p2, N);
	ll d4 = dis(1, p2), d5 = dis(p2, p1) ,d6 = dis(p1, N);

	if (d1 == INF || d2 == INF || d3 == INF) ans = INF;
	else if (d4 == INF || d5 == INF || d6 == INF) ans = INF;
	else ans = min(d1 + d2 + d3, d4 + d5 + d6);

	printf("%lld\n", ans == INF ? -1 : ans);	
}