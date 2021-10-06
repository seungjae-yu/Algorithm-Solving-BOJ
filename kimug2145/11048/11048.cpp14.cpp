#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, M;
int maze[1005][1005];
int dp[1005][1005];
int dx[3] = { 1,1,0 };
int dy[3] = { 0,1 ,1 };

int func(int x, int y) {

	if (x < 0 || y < 0) return 0;
	if (x > N || y> M) return 0;
	
	int&ret = dp[x][y];
	if (ret != -1)return ret;
	ret = 0;

	for (int i = 0; i < 3; i++) {

		int xx = x + dx[i];
		int yy = y + dy[i];
		
		ret = max(ret, func(xx, yy) + maze[x][y]);
	}
	return ret;
}

int main() {
	scanf("%d %d", &N, &M);
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			scanf("%d", &maze[i][j]);
	}	
	printf("%d", func(0, 0));
}