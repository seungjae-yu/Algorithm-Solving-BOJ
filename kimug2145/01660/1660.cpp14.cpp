#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int N, ssum[125], dp[300002];
#define INF 987654321

int main() {
	scanf("%d", &N);
	ssum[1] = 1;

	for (int i = 2; i <= 122; i++) ssum[i] = ssum[i - 1] + (i)*(i + 1) / 2;

	fill(dp + 1, dp + 1 + N, INF);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= 122; j++) {
			if (ssum[j] <= i) {
				int tmp = dp[i - ssum[j]];
				if (tmp != 987654321 && tmp + 1 < dp[i]) {
					dp[i] = tmp + 1;
				}
			}
		}
	}
	printf("%d", dp[N]);
}