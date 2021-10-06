#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N;
int inp[1002];
int dp[1002][1002];
#define INF 987654321

int func(int n , int bef) {

	if (n > N) return 0;
	
	int& ret = dp[n][bef];
	if (ret != -1) return ret;
	ret = 0;

	if (inp[n] > bef) ret = max(ret, func(n + 1, inp[n]) + 1);
	ret = max(ret, func(n + 1, bef));

	return ret;
}

int main() {
	memset(dp, -1, sizeof(dp));
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) scanf("%d", &inp[i]);
	printf("%d\n", func(1,0));
}