#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
#define INF 1987654321
int N, sqr;
int dp[100002];

int func(int n) {

	if (n > N) return INF;
	if (n == N) return 0;

	int&ret = dp[n];
	if (ret != -1) return ret;
	ret = INF;

	for (int i = 1; i <= (sqr + 1); i++) {
		ret = min(ret, func(n + i*i) + 1);
	}

	return ret;
}


int main() {
	scanf("%d", &N);
	sqr = (int)sqrt(N);	
	memset(dp, -1, sizeof(dp));
	printf("%d\n", func(0));
}