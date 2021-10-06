#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
#define INF 987654321
int V, E, S;
int a, b, c;

bool chk[20001];
int dist[20001];
vector<pair< int, int > > v[20001];

int main() {

	scanf("%d %d %d", &V, &E, &S);

	for (int i = 1; i <= V; i++)
		dist[i] = INF;

	dist[S] = 0; // 자기 자신 0으로

	for (int i = 0; i < E; i++) {
		scanf("%d %d %d", &a, &b, &c);
		v[a].push_back(make_pair(b,c)); //b는 갈곳 c는 cost
	}

	priority_queue< pair < int, int > > pq; // cost, to
	pq.push(make_pair(0, S)); // 시작지점은 0 cost

	while (!pq.empty()) {

		pair < int, int > temp = pq.top(); pq.pop();

		int to = temp.second;
		int cost = -temp.first;

		if (chk[to]) continue;

		chk[to] = true;

		int sz = v[to].size();

		for (int i = 0; i < sz; i++) {

			int tto = v[to][i].first;
			int tcost = v[to][i].second;

			if (dist[tto] > cost + tcost) {
				dist[tto] = cost + tcost;
				pq.push(make_pair(-dist[tto],tto));
			}
		}
	}

	for (int i = 1; i <= V; i++) {
		if (dist[i] == INF) printf("INF\n");
		else printf("%d\n", dist[i]);
	}
}