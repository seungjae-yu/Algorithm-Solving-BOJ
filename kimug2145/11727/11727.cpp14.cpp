#include <iostream>
using namespace std;
#define R 10007
int N;
int dp[1004];

int main() {

	scanf("%d", &N);

	dp[1] = 1;
	dp[2] = 3;

	for (int i = 3; i <= N; i++)
		dp[i] = (dp[i - 1] + (dp[i - 2] * 2) % R) % R;

	printf("%d", dp[N]);
}