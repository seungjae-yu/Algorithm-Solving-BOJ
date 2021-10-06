#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

#define R 1000000
typedef long long ll;
int N;

ll dp[1111][3][4];

ll func(int n, int late, int absent) {

	if (late == 2) return 0;
	if (absent == 3) return 0;
	if (n == N) return 1;

	ll &ret = dp[n][late][absent];
	if (ret != -1) return ret;
	ret = 0;
	
	ret += func(n + 1, late, 0) % R;	
	ret += func(n + 1, late + 1, 0) % R;	
	ret += func(n + 1, late, absent + 1) % R;

	return ret % R;
}

int main() {
	scanf("%d", &N);
	memset(dp, -1, sizeof(dp));
	printf("%lld\n", func(0, 0, 0) % R);
}