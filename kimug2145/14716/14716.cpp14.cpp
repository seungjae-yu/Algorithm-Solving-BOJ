#include <iostream>
using namespace std;

int r, c, cnt;
int inp[255][255];
int dx[8] = { -1,0,1,-1,1,-1,0,1 };
int dy[8] = { 1,1,1,0,0,-1,-1,-1 };

void DFS(int y, int x) {
	inp[y][x] = 0;

	for (int i = 0; i < 8; i++) {
		int yy = y + dy[i];
		int xx = x + dx[i];
		if (yy >= 0 && xx >= 0 && yy < r && xx < c && inp[yy][xx]) DFS(yy, xx);
	}
}

int main() {
	scanf("%d %d", &r, &c);

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			scanf("%d", &inp[i][j]);

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (inp[i][j]) cnt++, DFS(i, j);
	printf("%d\n", cnt);
}