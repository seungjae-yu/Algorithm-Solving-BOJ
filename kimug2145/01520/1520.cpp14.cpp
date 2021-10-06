#include <iostream>
#include <cstring>
using namespace std;

int N, M;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

int inp[505][505];
int dp[505][505];

int func(int x, int y) {

	if (x > N || y > M) return 0;
	if (x <= 0 || y <= 0) return 0;
	if (x == N && y == M) return 1;

	int& ret = dp[x][y];
	if (ret != -1) return ret;
	ret = 0;

	for (int i = 0; i < 4; i++) {

		int xx = x + dx[i];
		int yy = y + dy[i];

		if (inp[x][y] > inp[xx][yy]) {
			ret += func(xx, yy);
		}
	}
	return ret;
}

int main() {

	scanf("%d %d", &N, &M);
	memset(dp, -1, sizeof(dp));

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			scanf("%d", &inp[i][j]);

	printf("%d", func(1, 1));
}