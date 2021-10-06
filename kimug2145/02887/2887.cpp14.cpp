#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

typedef struct {
	int p[3], idx;
}pos;

int N, ans;
pos inp[100001];
bool chk[100001];
typedef pair<int, int> pii;

vector<pii> v[100001];
priority_queue<pii> pq;

int dist(pos p1, pos p2) {
	return min(abs(p1.p[0] - p2.p[0]), min(abs(p1.p[1] - p2.p[1]), abs(p1.p[2] - p2.p[2])));
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d %d %d", &inp[i].p[0], &inp[i].p[1], &inp[i].p[2]), inp[i].idx = i;

	for (int i = 0; i < 3; i++) {		
		sort(inp, inp + N, [&i](pos p1, pos p2) {			
			return p1.p[i] < p2.p[i];
		});		
		
		for (int j = 0; j < N - 1; j++) {
			v[inp[j].idx].push_back({ inp[j + 1].idx,dist(inp[j],inp[j + 1]) });
			v[inp[j+1].idx].push_back({ inp[j].idx,dist(inp[j],inp[j + 1]) });
		}
	}

	pq.push({ 0,0 });

	while (!pq.empty()) {
		int cost = -pq.top().first;
		int to = pq.top().second;
		pq.pop();

		if (chk[to]) continue;
		chk[to] = true;

		ans += cost;		
		for (int i = 0; i < v[to].size(); i++) {
			pq.push(make_pair(-v[to][i].second, v[to][i].first));
		}
	}
	printf("%d\n", ans);
}