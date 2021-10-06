#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int s, g;
int inp[1005][1005];
int arr[1005][1005][2];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
#define INF 987654321

typedef struct pos {
	int _x, _y;
	bool _chk;
}_pos;

int main() {

	scanf("%d %d", &s, &g);

	for (int i = 1; i <= s; i++)
		for (int j = 1; j <= g; j++) {
			scanf("%1d", &inp[i][j]);
			arr[i][j][0] = INF;
			arr[i][j][1] = INF;
		}

	queue<pos> q;
	pos start = { 1,1,0 };
	q.push(start);

	arr[1][1][0] = arr[1][1][1] = 1;	

	while (!q.empty()) {

		pos now = q.front();
		int x = now._x;
		int y = now._y;
		bool chk = now._chk;
		q.pop();

		pos tmp;

		for (int i = 0; i < 4; i++) {

			int xx = x + dx[i];
			int yy = y + dy[i];

			//범위체크
			if (xx >= 1 && yy >= 1 && xx <= g && yy <= s) {

				//더 짧으면
				if (arr[yy][xx][chk] > arr[y][x][chk] + 1) {

					//벽 안뚫었으면
					if (inp[yy][xx] && !chk) {
						arr[yy][xx][1] = arr[y][x][0] + 1;
						tmp = { xx,yy,1 };
						q.push(tmp);
					}

					else if (!inp[yy][xx]) {
						tmp = { xx,yy,chk };
						q.push(tmp);
						arr[yy][xx][chk] = arr[y][x][chk] + 1;
					}
				}
			}
		}
	}
	int ans = min(arr[s][g][0], arr[s][g][1]);
	if (ans == INF) printf("-1");
	else printf("%d", ans);
}