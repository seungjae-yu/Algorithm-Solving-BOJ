#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int input[505][505];
int dp[505][505];
int ans = -1;

int main() {

	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &input[i][j]);
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = input[i][j] + max(dp[i - 1][j], dp[i - 1][j -1]);
			ans = max(dp[i][j], ans);
		}		
	}
	printf("%d", ans);
}