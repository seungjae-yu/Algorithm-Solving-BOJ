#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N, M;
int man[1004];
int woman[1004];
int dp[1004][1004];
#define INF 987654321

int func(int n, int m) {

	if (n == N) return 0;
	if (m == M) return INF;

	int& ret = dp[n][m];
	if (ret != -1) return ret;
	ret = INF;

	ret = min(ret, abs(man[n] - woman[m]) + func(n + 1, m + 1));
	ret = min(ret, func(n, m + 1));

	return ret;
}

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) scanf("%d", &man[i]);
	for (int i = 0; i < M; i++) scanf("%d", &woman[i]);

	sort(man, man + N);
	sort(woman, woman + M);

	memset(dp, -1, sizeof(dp));

	if (N > M) swap(man, woman), swap(N, M);

	printf("%d\n", func(0, 0));
}