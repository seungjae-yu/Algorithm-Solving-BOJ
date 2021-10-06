#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int g, s, cnt, bigRoom, ans3;
int inp[52][52];
int room[52][52];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
map<int, int> m;

void DFS(int v, int x, int y) {
	room[x][y] = cnt;
	m[cnt]++;

	if (v < 8 && !room[x + 1][y]) DFS(inp[x + 1][y], x + 1, y);
	else if (v >= 8) v -= 8;

	if (v < 4 && !room[x][y + 1]) DFS(inp[x][y + 1], x, y + 1);
	else if (v >= 4) v -= 4;

	if (v < 2 && !room[x - 1][y]) DFS(inp[x - 1][y], x - 1, y);
	else if (v >= 2) v -= 2;

	if (v == 0 && !room[x][y - 1]) DFS(inp[x][y - 1], x, y - 1);
}

int main() {
	scanf("%d %d", &g, &s);

	for (int i = 1; i <= s; i++)
		for (int j = 1; j <= g; j++)
			scanf("%d", &inp[i][j]);

	for (int i = 1; i <= s; i++) {
		for (int j = 1; j <= g; j++) {
			if (room[i][j] == false) {
				cnt++;
				DFS(inp[i][j], i, j);
			}
		}
	}

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		bigRoom = max(bigRoom, it->second);

	for (int i = 1; i <= s; i++) {
		for (int j = 1; j <= g; j++) {
			for (int k = 0; k < 4; k++) {
				int xx = i + dx[k];
				int yy = j + dy[k];

				if (room[i][j] != room[xx][yy])
					ans3 = max(ans3, m[room[i][j]] + m[room[xx][yy]]);
			}
		}
	}
	printf("%d\n%d\n%d\n", cnt, bigRoom, ans3);
}