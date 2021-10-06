#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;

#define R 1000000000
int N, K;
ll dp[202][202];

ll func(int n, int k) {

	if (n == 0 && k == 0) return 1;
	if (n < 0 || k < 0) return 0;
	
	ll &ret = dp[n][k];
	if (ret != -1) return ret;
	ret = 0;

	for (int i = 0; i <= n; i++) {
		ret = ((ret %R) + (func(n - i, k - 1) % R)) % R;
	}

	return ret;
}

int main() {
	scanf("%d %d", &N, &K);
	memset(dp, -1, sizeof(dp));
	printf("%lld\n", func(N, K) % R);
}