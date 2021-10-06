#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, inp[1005][1005], dp[1005][1005][4];
int dx[2] = { 0,1 };
int dy[2] = { 1,0 };
#define INF 1987654321

int func(int y, int x, int nxt) {

	if (y > N || x > N || y < 0 || x < 0) return 0;
	
	int&ret = dp[y][x][nxt + 1];
	if (ret != -1) return ret;
	ret = 0;

	for (int i = 0; i < 2; i++) {
		int yy = y + dy[i];
		int xx = x + dx[i];

		if (yy >= 0 && xx >= 0 && yy < N && xx < N) {
			if (inp[yy][xx] == (nxt + 1) % 3) ret = max(ret, func(yy, xx, (nxt + 1) % 3) + 1);
			ret = max(ret, func(yy, xx, nxt));
		}
	}
	return ret;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &inp[i][j]);

	memset(dp, -1, sizeof(dp));

	if (inp[0][0] == 0) printf("%d\n", func(0, 0, 0) + 1);
	else printf("%d\n", func(0, 0, -1));	
}