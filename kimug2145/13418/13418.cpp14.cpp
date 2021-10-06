#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int N, M, a, b, c, mmax, mmin;
bool chk[1005];
vector <pair <int, bool> > v[1005];

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M + 1; i++) {
		scanf("%d %d %d", &a, &b, &c);
		//from , to, cost
		v[a].push_back(make_pair(b, !c));
		v[b].push_back(make_pair(a, !c));
	}

	priority_queue<pair <int, int > >pq;
	pq.push(make_pair(0, 0));

	while (!pq.empty()) {
		int cost = -pq.top().first;
		int to = pq.top().second;
		pq.pop();

		if (chk[to]) continue;
		chk[to] = true;

		mmin += cost;

		int sz = v[to].size();
		for (int i = 0; i < sz; i++) {
			pq.push(make_pair(-v[to][i].second, v[to][i].first));
		}
	}

	pq.push(make_pair(0, 0));
	memset(chk, 0, sizeof(chk));

	while (!pq.empty()) {
		int cost = pq.top().first;
		int to = pq.top().second;
		pq.pop();

		if (chk[to]) continue;
		chk[to] = true;

		mmax += cost;

		int sz = v[to].size();
		for (int i = 0; i < sz; i++) {
			pq.push(make_pair(v[to][i].second, v[to][i].first));
		}
	}
	cout << mmax*mmax - mmin*mmin;
}