#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int g, s;
int inp[55][55];
int dist[55][55];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
char c;
queue<pair<int, int> > q;

int BFS(int sx, int sy) {

	memset(dist, 0, sizeof(dist));
	dist[sx][sy] = 1;
	q.push(make_pair(sx, sy));
	int ret = 0;

	while (!q.empty()) {

		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		ret = max(ret, dist[x][y]);

		for (int i = 0; i < 4; i++) {
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx >= 0 && yy >= 0 && xx < s && yy < g && inp[xx][yy] == 1 && dist[xx][yy] == 0) {
				q.push(make_pair(xx, yy));
				dist[xx][yy] = dist[x][y] + 1;
			}
		}
	}

	return ret;
}

int main() {

	scanf("%d %d", &s, &g);

	for (int i = 0; i < s; i++)
		for (int j = 0; j < g; j++) {
			cin >> c;
			if (c == 'W') inp[i][j] == 0;
			else inp[i][j] = 1;
		}

	int ans = 0;
	for (int i = 0; i < s; i++)
		for (int j = 0; j < g; j++) {
			if (inp[i][j] == 1) {
				ans = max(BFS(i, j), ans);
			}
		}
	cout << ans - 1;
}