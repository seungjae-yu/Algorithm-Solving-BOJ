#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, K;
int money[100005];
int dp[100005];

#define INF 987654321

int main() {
	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++) scanf("%d", &money[i]);
	for (int i = 0; i <= K; i++) dp[i] = INF;

	dp[0] = 0;

	for (int i = 0; i < N; i++) {
		for (int j = money[i]; j <= K; j++) {
			dp[j] = min(dp[j], dp[j - money[i]] + 1);
		}
	}

	if (dp[K] == INF) { printf("-1"), exit(0); }
	printf("%d", dp[K]);
}