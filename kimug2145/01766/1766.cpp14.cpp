#include <iostream>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

int N, M, a, b;
vector<int> v[32003];
int inEdge[32003];

priority_queue<int, vector<int>, greater<int> > pq;

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		inEdge[b]++;
	}
	
	for (int i = 1; i <= N; i++)
		if (inEdge[i] == 0) pq.push(i);

	while (!pq.empty()) {
		int now = pq.top();
		pq.pop();
		printf("%d ", now);

		for (int i = 0; i < v[now].size(); i++) {
			inEdge[v[now][i]]--;
			if (inEdge[v[now][i]] == 0) pq.push(v[now][i]);
		}
	}
}