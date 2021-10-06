#include <iostream>
#include <cstring>
using namespace std;

int w, h;
int arr[55][55];
int dx[8] = { 0,0,-1,1,1,1 ,-1,-1 };
int dy[8] = { 1,-1,0,0,1,-1,1,-1 };

bool chk[55][55];

void DFS(int x, int y) {

	chk[x][y] = true;
	arr[x][y] = 0;
	int xx, yy;

	for (int i = 0; i < 8; i++) {
		xx = x + dx[i];
		yy = y + dy[i];

		if (chk[xx][yy] == false && xx > 0 && yy > 0 && xx <= h && yy <= w && arr[xx][yy] == 1) {
			arr[xx][yy] = 0;
			DFS(xx, yy);
		}
	}
}

int main() {

	while (true) {
		int cnt = 0;
		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0) exit(0);
		memset(arr, 0, sizeof(arr));
		memset(chk, 0, sizeof(chk));

		for (int i = 1; i <= h; i++)
			for (int j = 1; j <= w; j++)
				scanf("%d", &arr[i][j]);

		for (int i = 1; i <= h; i++)
			for (int j = 1; j <= w; j++) {
				if (arr[i][j] == 1) {
					DFS(i, j);
					cnt++;
				}
			}
		printf("%d\n", cnt);
	}
}