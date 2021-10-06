#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;

char c;
int L, R, C, dist[31][31][31];
bool inp[31][31][31], chk[31][31][31], isEscape;
int dx[] = { 1,-1,0,0,0,0 };
int dy[] = { 0,0,1,-1,0,0 };
int dl[] = { 0,0,0,0,-1,1 };
#define INF 1987654321;

typedef struct {
	int d, l, r, c;
}p;

bool operator< (p a, p b) {
	return a.d > b.d;
}

int main() {

	while (true) {
		scanf("%d %d %d", &L, &R, &C);
		if (L + R + C == 0) exit(0);

		memset(dist, 0, sizeof(dist));
		memset(inp, 0, sizeof(inp));
		memset(chk, 0, sizeof(chk));

		p st, ed;
		st.d = 0;
		for (int i = 0; i < L; i++)
			for (int j = 0; j < R; j++)
				for (int k = 0; k < C; k++) {
					scanf(" %1c", &c);
					if (c == 'S') st.l = i, st.r = j, st.c = k;
					else if (c == 'E') ed.l = i, ed.r = j, ed.c = k, inp[i][j][k] = 1;
					else inp[i][j][k] = (c == '.' ? 1 : 0);
					dist[i][j][k] = INF;
				}

		priority_queue<p> pq;
		pq.push(st);
		isEscape = false;

		while (!pq.empty()) {
			auto now = pq.top(); pq.pop();

			int d = now.d;
			int l = now.l;
			int r = now.r;
			int c = now.c;

			if (l == ed.l && r == ed.r && c == ed.c) {
				printf("Escaped in %d minute(s).\n", d);
				isEscape = true;
				break;
			}

			if (chk[l][r][c]) continue;
			chk[l][r][c] = true;

			for (int i = 0; i < 6; i++) {
				int nl = l + dl[i];
				int nr = r + dy[i];
				int nc = c + dx[i];
				if (nl < 0 || nr < 0 || nc < 0) continue;
				int nd = d + 1;
				if (inp[nl][nr][nc] && dist[nl][nr][nc] > nd) {
					dist[nl][nr][nc] = nd;
					pq.push({ nd,nl,nr,nc });
				}
			}
		}
		if (!isEscape) printf("Trapped!\n");
	}
}