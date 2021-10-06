#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, T, k[101], s[101];
int dp[101][10002];
#define INF 1987654321

int func(int n, int t) {

	if (t < 0 || n > N) return 0;

	int&ret = dp[n][t];
	if (ret != -1) return ret;
	ret = -INF;

	if (t - k[n + 1] >= 0) ret = max(ret, func(n + 1, t - k[n + 1]) + s[n + 1]);
	ret = max(ret, func(n + 1, t));

	return ret;
}

int main() {
	scanf("%d %d", &N, &T);
	for (int i = 1; i <= N; i++) scanf("%d %d", &k[i], &s[i]);
	memset(dp, -1, sizeof(dp));
	printf("%d\n", func(0, T));
}