#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define INF 1987654321
int v[105];
int N, S, M;
int dp[105][1005];

int func(int n, int vol) {
	
	if (n == N) return vol;

	int&ret = dp[n][vol];
	if (ret != -1) return ret;
	ret = -INF;

	if (vol + v[n] <= M)
		ret = max(ret, func(n + 1, vol + v[n]));

	if (vol - v[n] >= 0)
		ret = max(ret, func(n + 1, vol - v[n]));

	return ret;
}

int main() {
	scanf("%d %d %d", &N, &S, &M);
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < N; i++) scanf("%d", &v[i]);
	int ans = func(0, S);
	if (ans == -INF)printf("-1");
	else printf("%d\n", ans);
}