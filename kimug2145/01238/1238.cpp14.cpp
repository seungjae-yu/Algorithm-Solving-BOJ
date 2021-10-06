#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, X, from, to, cost;
vector <pair <int, int> > v[1001];
#define INF 987654321
int dist[1001];

int ret(int n) {

	int dist[1001];

	for (int i = 1; i <= N; i++) dist[i] = INF;
	dist[n] = 0;

	priority_queue<pair<int, int> >pq;

	for (int i = 1; i <= N; i++) dist[i] = INF;
	dist[n] = 0;

	pq.push({ 0,n });

	while (!pq.empty()) {

		auto now = pq.top();
		pq.pop();

		int next = now.second;
		int cost = -now.first;

		for (int i = 0; i < v[next].size(); i++) {
			int tto = v[next][i].first;
			int tcost = v[next][i].second;

			if (dist[tto] > cost + tcost) {
				dist[tto] = cost + tcost;
				pq.push(make_pair(-dist[tto], tto));
			}
		}
	}
	return dist[X];
}



int main() {
	scanf("%d %d %d", &N, &M, &X);

	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &from, &to, &cost);
		v[from].push_back({ to,cost });
	}

	priority_queue<pair<int, int> >pq;
	
	for (int i = 1; i <= N; i++) dist[i] = INF;
	dist[X] = 0;

	pq.push({ 0,X });

	while (!pq.empty()) {

		auto now = pq.top();
		pq.pop();

		int next = now.second;
		int cost = -now.first;

		for (int i = 0; i < v[next].size(); i++) {
			int tto = v[next][i].first;
			int tcost = v[next][i].second;

			if (dist[tto] > cost + tcost) {
				dist[tto] = cost + tcost;
				pq.push(make_pair(-dist[tto], tto));
			}
		}
	}
	
	int ans[1001];

	for (int i = 1; i <= N; i++) {
		ans[i] = dist[i]+ret(i);
	}
	printf("%d", *max_element(&ans[1], &ans[N + 1]));
}