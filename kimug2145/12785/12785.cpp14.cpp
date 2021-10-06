#include <iostream>
#include <algorithm>
using namespace std;

int w, h, x, y;

long long dp[210][210];
#define R 1000007

int main() {
	scanf("%d %d %d %d", &w, &h, &x, &y);
	
	dp[1][1] = 0;

	for (int i = 1; i <= w; i++) dp[1][i] = 1;
	for (int i = 1; i <= h; i++) dp[i][1] = 1;

	for (int i = 2; i <= h; i++) {
		for (int j = 2; j <= w; j++) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % R;
		}
	}
	printf("%lld", ((dp[y][x] % R) * (dp[h - y + 1][w - x + 1]) % R) % R);
}