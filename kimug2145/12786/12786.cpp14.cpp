#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, T, M, hole;
int inp[105][22];
int dp[105][105];
#define INF 987654321

int func(int n, int h) {

	if (n == N) {
		if (inp[n][h]) return 0;
		else return INF;
	}
	if (n > N) return INF;
	if (h > 20) return INF ;

	int&ret = dp[n][h];
	if (ret != -1) return ret;
	ret = INF;

	if (inp[n + 1][h]) ret = min(ret, func(n + 1, h));
	if (inp[n + 1][h + 1]) ret = min(ret, func(n + 1, h + 1));
	if (h - 1 >= 1 && inp[n + 1][h - 1]) ret = min(ret, func(n + 1, h - 1));
	if (h >= 10 && inp[n + 1][20]) ret = min(ret, func(n + 1, 20));
	if (h < 10 && inp[n + 1][2 * h]) ret = min(ret, func(n + 1, 2 * h));
	for (int i = 1; i <= 20; i++) {
		if (inp[n + 1][i]) ret = min(ret, func(n + 1, i) + 1);
	}

	return ret;
}

int main() {

	scanf("%d %d", &N, &T);
	memset(dp, -1, sizeof(dp));
	for (int i = 1; i <= N; i++) {
		scanf("%d", &M);
		while (M--) {
			scanf("%d", &hole);
			inp[i][hole] = true;
		}
	}

	int ans = func(0, 1);
	if (ans == INF || ans > T) printf("-1");
	else printf("%d", ans);
}