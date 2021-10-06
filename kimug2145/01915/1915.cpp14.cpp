#include <iostream>
#include <algorithm>
using namespace std;

int N, M, inp, ans;
int dp[1005][1005];

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			scanf("%1d", &dp[i][j]);
		}
	}
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (dp[i][j]) {
				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j])) + 1;
				ans = max(ans, dp[i][j]);
			}
		}
	}
	printf("%d", ans*ans);
}