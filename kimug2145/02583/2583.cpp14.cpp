#include <iostream>
#include <algorithm>
using namespace std;

int m, n, k;
int arr[102][102];
bool chk[102][102];
int sx, sy, ex, ey;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int res[10005], idx, val;

void DFS(int x, int y) {

	chk[y][x] = true;
	arr[y][x] = 1;
	res[idx] = val++;
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx >= 0 && xx < n && yy >= 0 && yy < m && chk[yy][xx] == false && arr[yy][xx] == 0) {			
			DFS(xx, yy);
		}
	}
}

int main() {
	scanf("%d %d %d", &m, &n, &k);
	
	while(k--){
		scanf("%d %d %d %d", &sx, &sy, &ex, &ey);
		
		for (int i = sx; i < ex; i++) {
			for (int j = sy; j < ey; j++) {
				arr[j][i] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0) {
				val = 1;
				DFS(j, i);
				idx++;
			}
		}
	}
	
	printf("%d\n", idx);
	sort(res, res + idx);
	for (int i = 0; i < idx; i++) printf("%d ", res[i]);
	printf("\n");
}