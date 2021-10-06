#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

char a[1002], b[1002];
int dp[1002][1002];
int la, lb, mmax;

int main() {
	scanf("%s %s", &a, &b);
	la = strlen(a);
	lb = strlen(b);

	for (int i = 0; i < la; i++) {
		for (int j = 0; j < lb; j++) {
			if (a[i] == b[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
			else dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
		}
	}
	printf("%d\n", dp[la][lb]);
}