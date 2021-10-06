#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int dp[33];

int func(int n) {

	if (n < 0) return 0;
	if (n == 0) return 1;
	if (n == 1) return 0;
	if (n == 2) return 3;

	int&ret = dp[n];
	if (ret != -1) return ret;
	ret = 0;

	ret += 3 * func(n - 2);
	for (int i = 4; i <= n; i += 2) {
		ret += 2 * func(n - i);
	}

	return ret;
}

int main() {
	scanf("%d", &N);
	memset(dp, -1, sizeof(dp));
	printf("%d\n", func(N));
}