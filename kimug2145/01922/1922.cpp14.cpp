#include <iostream>
#include <queue>
using namespace std;

int N, M;
int a, b, c;
int ans;
bool chk[1001];

int main() {
	
	vector <pair <int, int > > V[1001];
	scanf("%d %d", &N, &M);

	//a 출발점  ,b 도착점  ,c 비용
	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &a, &b, &c);
		V[a].push_back(make_pair(b, c));
		V[b].push_back(make_pair(a, c));
	}
		
	//cost , 도착점
	priority_queue< pair <int, int > > pq;
	
	pq.push(make_pair(0, 1));

	while (!pq.empty()) {
       
		int cost = -pq.top().first;
		int to = pq.top().second;
		pq.pop();

		if (chk[to])
			continue;

		chk[to] = true;

		ans += cost;

		int sz = V[to].size();

		for (int i = 0; i < sz; i++) {
			pq.push(make_pair(-V[to][i].second , V[to][i].first));
		}
	}
	printf("%d\n", ans);
}