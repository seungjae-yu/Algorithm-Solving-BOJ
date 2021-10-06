#include <iostream>
#include <algorithm>
#include <algorithm>
#include <cstring>
using namespace std;

int N, inp[1002];
int dp[1002][2];
int mmax;

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &inp[i]);
	
	for (int i = 0; i < N; i++) {
		dp[i][0] = 1;
		for (int j = 0; j <= i; j++) {
			if (inp[i] > inp[j] && dp[j][0] + 1 > dp[i][0])
				dp[i][0] = dp[j][0] + 1;
		}
	}

	for (int i = N-1; i >= 0; i--) {
		dp[i][1] = 1;
		for (int j = N-1; j >= i; j--) {
			if (inp[i] > inp[j] && dp[j][1] + 1 > dp[i][1])
				dp[i][1] = dp[j][1] + 1;
		}
	}
	
	for (int i = 0; i < N; i++) {
		dp[i][0] += dp[i][1];		
		mmax = max(mmax, dp[i][0]);
	}

	printf("%d\n", mmax - 1);
}