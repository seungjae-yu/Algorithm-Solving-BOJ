#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

typedef pair<int, int> pii;
queue<pair<pii, pii>> q;
int n, m, arr[11][11][11][11], ans;
char inp[11][11];
bool chk[11][11][11][11];

int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

pii r, b;

int main() {
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			scanf(" %1c", &inp[i][j]);
			if (inp[i][j] == 'R') r.first = i, r.second = j;
			else if (inp[i][j] == 'B') b.first = i, b.second = j;
		}

	q.push({ r,b });
	chk[r.first][r.second][b.first][b.second] = 1;

	while (!q.empty()) {
		int sz = q.size();
		while (sz--) {
			auto now = q.front();
			q.pop();

			r = now.first;
			b = now.second;

			if (inp[r.first][r.second] == 'O' && inp[b.first][b.second] != 'O') {
				ans = ans <= 10 ? ans : -1;
				printf("%d", ans);
				exit(0);
			}

			for (int i = 0; i < 4; i++) {
				pii nr = r, nb = b;
				int dr, db;
				dr = db = 0;

				while (inp[nr.first + dx[i]][nr.second + dy[i]] != '#' && inp[nr.first][nr.second] != 'O')
					nr.first += dx[i], nr.second += dy[i], dr++;

				while (inp[nb.first + dx[i]][nb.second + dy[i]] != '#' && inp[nb.first][nb.second] != 'O')
					nb.first += dx[i], nb.second += dy[i], db++;

				if (nr == nb) {
					if (inp[nb.first][nb.second] == 'O') continue;
					if (dr > db) nr.first -= dx[i], nr.second -= dy[i];
					else nb.first -= dx[i], nb.second -= dy[i];
				}

				if (chk[nr.first][nr.second][nb.first][nb.second]) continue;
				chk[nr.first][nr.second][nb.first][nb.second] = 1;
				q.push({ nr,nb });
			}
		}
		ans++;
	}
	printf("-1");
}