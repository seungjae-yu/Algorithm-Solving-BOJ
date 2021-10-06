#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int tc, K, inp[505];
int dp[505][505];
#define INF 1987654321

int func(int n, int e) {

	if (n >= e) return 0;

	int&ret = dp[n][e];
	if (ret != -1) return ret;
	ret = INF;

	for (int i = n; i <= e; i++) {
		ret = min(ret, func(n, i) + func(i + 1, e) + inp[e] - inp[n - 1]);
	}

	return ret;
}

int main() {
	scanf("%d", &tc);

	while (tc--) {
		memset(dp, -1, sizeof(dp));
		scanf("%d", &K);
		for (int i = 1; i <= K; i++) scanf("%d", &inp[i]), inp[i] += inp[i - 1];
		printf("%d\n", func(1, K));
	}
}