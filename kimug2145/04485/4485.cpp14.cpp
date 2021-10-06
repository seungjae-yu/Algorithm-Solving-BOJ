#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int N, inp[127][127], d[127][127], n = 1;
int dx[] = { 0,0,-1,1 };
int dy[] = { -1,1,0,0 };
bool chk[127][127];
#define INF 1987654321

typedef struct {
	int cost, r, c;
}p;

bool operator<(p a, p b) {
	return a.cost > b.cost;
}

int main() {

	while (true) {
		scanf("%d", &N);
		if (N == 0) exit(0);

		memset(inp, 0, sizeof(inp));
		memset(chk, 0, sizeof(chk));
		memset(d, 0, sizeof(d));

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				scanf("%d", &inp[i][j]), d[i][j] = INF;

		p pos = { inp[0][0], 0,0 };
		priority_queue<p> pq;
		pq.push(pos);

		while (!pq.empty()) {
			auto now = pq.top(); pq.pop();

			int cost = now.cost;
			int r = now.r;
			int c = now.c;

			if (chk[r][c]) continue;
			chk[r][c] = true;

			for (int i = 0; i < 4; i++) {
				int nr = r + dy[i];
				int nc = c + dx[i];
				if (nr < 0 || nc < 0) continue;
				int ncost = cost + inp[nr][nc];

				if (d[nr][nc] > ncost) {
					d[nr][nc] = ncost;
					pq.push({ ncost,nr,nc });
				}
			}
		}
		printf("Problem %d: %d\n", n++, d[N - 1][N - 1]);
	}
}