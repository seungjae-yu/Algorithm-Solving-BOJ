#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

int tc, N, K, x, y, cost[1002], W, ind[1002], ans[1002];
queue<int> q;

int main() {
	scanf("%d", &tc);

	while (tc--) {
		vector<int> v[1002];
		memset(ind, 0, sizeof(ind));
		memset(ans, 0, sizeof(ans));
		memset(cost, 0, sizeof(cost));
		scanf("%d %d", &N, &K);
		for (int i = 1; i <= N; i++) scanf("%d", &cost[i]);
		while (K--) scanf("%d %d", &x, &y), v[x].push_back(y), ind[y]++;
		scanf("%d", &W);

		for (int i = 1; i <= N; i++) if (!ind[i]) q.push(i), ans[i] = cost[i];
		
		while (!q.empty()) {
			int now = q.front();
			q.pop();

			for (int i = 0; i < v[now].size(); i++) {
				ind[v[now][i]]--;
				ans[v[now][i]] = max(ans[v[now][i]], ans[now] + cost[v[now][i]]);
				if (!ind[v[now][i]]) q.push(v[now][i]);
			}
		}
		printf("%d\n", ans[W]);
	}
}