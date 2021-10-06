#include <iostream>
#include <cstring>
using namespace std;

#define R 1000000000
int N;
int m[22], dp[1000002][22];

int func(int n, int k) {

	if (n < 0) return 0;
	
	if (n == 0) return 1;
	if (n > 0 && k == 1) return 1;

	int &ret = dp[n][k];
	if (ret != -1) return ret;

	return ret = (func(n, k - 1) % R + func(n - m[k], k) % R) % R;
}

int main() {

	memset(dp, -1, sizeof(dp));

	m[1] = 1;
	for (int i = 2; i <= 22; i++) {
		m[i] = 1 << (i - 1);
	}

	scanf("%d", &N);
	int ans = func(N, 22) % R;

	for (int i = 1; i <= 23;i++){
		if (N == m[i]){
			printf("%d", ans - 1);
			exit(0);
		}
	}

	printf("%d", ans);
}