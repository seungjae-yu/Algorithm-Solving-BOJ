#include <iostream>
using namespace std;

int N;
long long dp[1000005];

#define R 1000000000

int main() {

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 2;

	scanf("%d", &N);
	for (int i = 4; i <= N; i++) {
		dp[i] = (((dp[i - 1] % R + dp[i - 2] % R) % R) *(i - 1)) % R;
	}

	cout << dp[N] % R << "\n";
}
