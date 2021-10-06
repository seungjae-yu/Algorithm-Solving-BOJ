#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Arr {
	int x, y;
};

int N;
Arr arr[505];
int dp[505][505];
#define INF 987564321

int func(int x, int y) {

	if (x == y) return 0;
	if (x + 1 == y) return arr[x].x * arr[x].y * arr[y].y;

	int&ret = dp[x][y];
	if (ret != -1) return ret;
	ret = INF;

	for (int i = x; i <= y; i++)
		ret = min(ret, func(x, i) + func(i + 1, y) + arr[x].x * arr[i].y * arr[y].y);

	return ret;
}

int main() {

	memset(dp, -1, sizeof(dp));
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);

	printf("%d", func(1, N));
}