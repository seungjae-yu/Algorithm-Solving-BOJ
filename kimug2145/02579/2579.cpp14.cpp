#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int dp[305][3];
int input[305];

int func(int n, int state) {

	int& ret = dp[n][state];

	if (n == 0) return ret;

	if (ret != 0 || n == 0) return ret;

	if (state == 1) {
		return ret = func(n - 1, 2) + input[n];
	}

	return ret = max(func(n - 2, 1), func(n - 2, 2)) + input[n];
}

int main() {

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &input[i]);

	memset(dp, 0, sizeof(dp));
	dp[1][1] = dp[1][2] = input[1];

	printf("%d\n", max(func(N, 1), func(N, 2)));
}