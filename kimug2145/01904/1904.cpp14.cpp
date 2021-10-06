#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define R 15746
int N;
int dp[1000002];

int func(int n) {

	if (n == N) return 1;
	if (n > N) return 0;

	int&ret = dp[n];
	if (ret != -1) return ret;
	ret = 0;

	ret = (ret + func(n + 1)) % R;
	ret = (ret + func(n + 2)) % R;

	return ret;
}

int main() {
	scanf("%d", &N);
	memset(dp, -1, sizeof(dp));
	printf("%d\n", func(0) % R);
}