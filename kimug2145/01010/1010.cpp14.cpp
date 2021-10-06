#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int tc, N, R;
int dp[33][33];

int func(int n, int r) {

	if (n == r) return 1;
	else if (r == 1) return n;

	int&ret = dp[n][r];
	if (ret != -1) return ret;
	ret = 0;

	ret = func(n - 1, r - 1) + func(n - 1, r);

	return ret;
}

int main() {
	scanf("%d", &tc);
	while (tc--) {
		memset(dp, -1, sizeof(dp));
		scanf("%d %d", &R, &N);
		printf("%d\n", func(N, R));
	}
}