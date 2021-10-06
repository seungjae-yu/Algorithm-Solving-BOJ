#include <iostream>
#include <cstring>
using namespace std;

bool bat[51][51];
int tc, M, N, k, x, y;
int cnt;
int cx, cy;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

void DFS(int yy, int xx) {
	bat[yy][xx] = 0;
	
	for (int i = 0; i < 4; i++) {
		cx = xx + dx[i];
		cy = yy + dy[i];

		if (cx >= 0 && cy >= 0 && cx < M && cy < N && bat[cy][cx] == 1) {
			bat[yy][xx] = 0;
			DFS(cy, cx);
		}
	}
}

int main() {

	scanf("%d", &tc);

	while (tc--) {

		memset(bat, 0, sizeof(bat));		
		scanf("%d %d %d", &M, &N, &k);
		cnt = 0;

		for (int i = 0; i < k; i++) {
			scanf("%d %d", &x, &y);
			bat[y][x] = 1;
		}
		
		for (int i = 0; i < N; i++) { 
			for (int j = 0; j < M; j++) { 
				if (bat[i][j] == 1) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
}