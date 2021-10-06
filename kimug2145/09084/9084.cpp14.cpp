#include <iostream>
#include <cstring>
using namespace std;

int tc, N, k;
int dp[10001];
int money[21];

int main() {

	scanf("%d", &tc);

	while (tc--) {

		memset(dp, 0, sizeof(dp));
		memset(money, 0, sizeof(money));

		scanf("%d", &N);

		for (int i = 0; i < N; i++) 
			scanf("%d", &money[i]);

		scanf("%d", &k);
		
		dp[0] = 1;

		for (int i = 0; i < N; i++) {
			for (int j = money[i]; j <= k; j++) {
				dp[j] += dp[j - money[i]];
			}
		}
		
		cout << dp[k] << "\n";
	}
}