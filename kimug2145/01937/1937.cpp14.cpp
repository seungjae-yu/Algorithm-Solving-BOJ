#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N;
int inp[505][505];
int dp[505][505];

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

int func(int x, int y) {

	if (x < 1 || y < 1) return 0;
	if (x > N || y>N) return 0;

	int& ret = dp[x][y];
	if (ret != 1) return ret;

	for (int i = 0; i < 4; i++) {

		int xx = x + dx[i];
		int yy = y + dy[i];

		if (inp[x][y] > inp[xx][yy]) {
			ret = max(ret, func(xx, yy) + 1);
		}
	}
	return ret;
}

int main() {

	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			scanf("%d", &inp[i][j]);
	}

	int mmax = 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			dp[i][j] = 1;
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			mmax = max(mmax, func(i, j));
		}
	}
	printf("%d", mmax);
}