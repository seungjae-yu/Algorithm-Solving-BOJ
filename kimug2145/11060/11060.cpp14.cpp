#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int dp[1004], inp[1004];
#define INF 987654321

int func(int n) {

	if (n >= N) return 0;
	
	int& ret = dp[n];
	if (ret != -1) return ret;
	ret = INF;

	int dist = inp[n];

	for (int i = 0; i <= dist; i++) {
		ret = min(ret, func(n + i) + 1);
	}
	return ret;
}

int main() {
	scanf("%d", &N);
	memset(dp, -1, sizeof(dp));
	for (int i = 1; i <= N; i++) scanf("%d", &inp[i]);

	int ans = func(1);
	if (ans == INF) printf("-1");
	else printf("%d", ans);
}