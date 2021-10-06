#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

int m, n, inp[101][101];
int dx[] = { 0,1,-1,0,0 };
int dy[] = { 0,0,0,1,-1 };
bool chk[101][101][5];

typedef pair<int, int> pii;
typedef pair<pii, pii> pos; //y,x,dir,dis
queue<pos> q;
pos st, ed;

int main() {
	scanf("%d %d", &m, &n);

	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			scanf("%d", &inp[i][j]);

	scanf("%d %d %d", &st.first.first, &st.first.second, &st.second.first);
	scanf("%d %d %d", &ed.first.first, &ed.first.second, &ed.second.first);

	chk[st.first.first][st.first.second][st.second.first] = true;
	q.push(st);

	while (!q.empty()) {
		auto now = q.front();
		q.pop();

		int y = now.first.first, x = now.first.second;
		int dir = now.second.first, dis = now.second.second;

		if (y == ed.first.first && x == ed.first.second && dir == ed.second.first) {
			printf("%d\n", dis);
			exit(0);
		}

		for (int i = 1; i <= 3; i++) {
			int ny = y + dy[dir] * i;
			int nx = x + dx[dir] * i;			
			if (ny >= 1 && ny <= m && nx >= 1 && nx <= n) {				
				if (inp[ny][nx] == 0) {
					if (!chk[ny][nx][dir]) {
						chk[ny][nx][dir] = true;
						q.push({ {ny,nx},{dir,dis + 1} });
					}
				}
				else break;
			}
		}

		for (int i = 1; i <= 4; i++) {
			if (i == dir || chk[y][x][i]) continue;
			if ((i == 1 && dir == 2) || (i == 2 && dir == 1) || (i == 3 && dir == 4) || (i == 4 && dir == 3)) q.push({ {y,x},{i,dis + 2} });
			else q.push({ {y,x},{i,dis + 1} });
			chk[y][x][i] = true;
		}
	}
}