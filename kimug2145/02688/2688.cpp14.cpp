#include <iostream>
using namespace std;

typedef long long ll;

ll dp[65][10];
ll ans[65];
ll sum;

int main() {

	//초기화
	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}


	for (int i = 2; i <= 64; i++) {

		sum = 0;

		for (int j = 0; j < 10; j++) {

			dp[i][j] = dp[i - 1][j] + sum;
			sum += dp[i - 1][j];
		}

		ans[i] = 0;

		for (int k = 0; k < 10; k++) {
			ans[i] += dp[i][k];
		}
	}

	int tc;
	scanf("%d", &tc);

	while (tc--) {
		int n;
		scanf("%d", &n);
		if(n!= 1) printf("%lld\n", ans[n]);
		else printf("10\n");
	}
}