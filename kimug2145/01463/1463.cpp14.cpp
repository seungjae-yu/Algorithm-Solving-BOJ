#include <iostream>
#include <algorithm>

int dp[1000001];
int N;
using namespace std;

int main() {

	scanf("%d", &N);
		
	for (int i = 2; i < N + 1; i++) {

		dp[i] = dp[i - 1] + 1;

		if (i % 2 == 0)
			dp[i] = min(dp[i / 2] + 1, dp[i]);
		
		if (i % 3 == 0)
			dp[i] = min(dp[i / 3] + 1, dp[i]);
	}

	printf("%d\n", dp[N]);

}
