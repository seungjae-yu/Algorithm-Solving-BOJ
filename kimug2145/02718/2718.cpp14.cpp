#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int tc, N;
int dp[50];

int func(int n) {
	
	if (n < 0) return 0;
	if (n == 1 || n == 0) return 1;
	if (n == 2) return 5;
	if (n == 3) return 11;

	int&ret = dp[n];
	if (ret != -1) return ret;
	ret = 0;
	
	ret = func(n - 1) + 5 * func(n - 2) + func(n - 3) - func(n - 4);

	return ret;
}

int main() {
	scanf("%d", &tc);
	memset(dp, -1, sizeof(dp));
	
	while (tc--) {
		scanf("%d", &N);
		printf("%d\n", func(N));
	}
}