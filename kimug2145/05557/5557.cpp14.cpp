#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef long long ll;
int N, inp[105];
ll dp[105][22];

ll func(int n, int now) {
		
	if (now < 0 || now >20) return 0;
	if (n == N - 1) {
		if (now == inp[N - 1]) return 1;
		else return 0;
	}
	
	ll&ret = dp[n][now];
	if (ret != -1) return ret;
	ret = 0;

	ret += func(n + 1, now + inp[n]);		
	ret += func(n + 1, now - inp[n]);

	return ret;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &inp[i]);	
	memset(dp, -1, sizeof(dp));
	printf("%lld", func(1, inp[0]));
}