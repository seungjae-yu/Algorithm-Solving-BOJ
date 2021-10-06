#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;

int N, iter = 1;
ll inp[100001][4];
ll dp[100001][4];

ll dx[4] = { -1,0,1,1 };
ll dy[4] = { 1,1,1,0 };

#define INF 1987654321

ll func(int n, int pos) {

	if (n == N && pos == 1)
		return inp[N][1];

	ll&ret = dp[n][pos];
	if (ret != -1) return ret;
	ret = INF;

	for (int i = 0; i < 4; i++) {

		ll y = n + dy[i];
		ll x = pos + dx[i];

		if (x >= 0 && x < 3 && y <= N && y >= 1) {			
			ret = min(ret, func(y, x) + inp[n][pos]);
		}
	}
	return ret;
}

int main() {

	while (true) {
		scanf("%d", &N);

		if (N == 0) break;
		memset(dp, -1, sizeof(dp));
		for (int i = 1; i <= N; i++)
			for (int j = 0; j < 3; j++)
				scanf("%lld", &inp[i][j]);

		printf("%d. %lld\n", iter++, func(1, 1));

	}
}