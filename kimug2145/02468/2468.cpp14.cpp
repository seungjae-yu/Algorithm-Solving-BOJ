#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int arr[101][101];
bool chk[101][101];
bool go[101];
int dy[] = { 1,-1,0,0 };
int dx[] = { 0,0,-1,1 };
bool isRange(int y, int x) {
	return 0 <= y && y < N && 0 <= x && x < N;
}
void DFS(int y, int x, int k) {
	chk[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (isRange(ny, nx) && !chk[ny][nx] && arr[ny][nx] > k) {
			DFS(ny, nx, k);
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &arr[i][j]);
			go[arr[i][j]] = true;
		}
	}

	int ans = 1;
	for (int k = 1; k <= 100; k++) {
		if (!go[k])
			continue;

		memset(chk, 0, sizeof(chk));
		int cur = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (!chk[i][j] && arr[i][j] > k) {
					cur++;
					DFS(i, j, k);
				}
			}
		}

		ans = max(ans, cur);
	}
	cout << ans;

	return 0;
}