#include <iostream>
#include <algorithm>
using namespace std;

int N, inp[1005], dp[1005][2], ans = -1;
//					[길이][더한값]
int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) scanf("%d", &inp[i]);

	for (int i = 1; i <= N; i++) {
		dp[i][0] = 1;
		dp[i][1] = inp[i];
		for (int j = 0; j < i; j++) {
			if (inp[i] > inp[j]					//증가하고
				&& dp[j][0] + 1 > dp[i][0]		//길이가 더 길어지고
				&& dp[j][1] + inp[i] > dp[i][1]) //더한값이 더 크면
			{
				dp[i][0] = dp[j][0] + 1;
				dp[i][1] = dp[j][1] + inp[i];
			}
		}
		ans = max(ans, dp[i][1]);
	}
	printf("%d", ans);
}