#include <cstring>
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
ll N, inp[102][102], dp[102][102];

ll func(ll x, ll y) {

	if (x > N || y > N || x < 0 && y < 0) return 0;
	if (x == N && y == N) return 1;

	ll&ret = dp[x][y];
	if (ret != -1) return ret;
	ret = 0;

	ll v = inp[x][y];
	ll dx[2] = { 0,v };
	ll dy[2] = { v,0 };

	for (int i = 0; i < 2; i++) {
		ret += func(x + dx[i], y + dy[i]);
	}

	return ret;
}

int main() {
	memset(dp, -1, sizeof(dp));
	scanf("%lld", &N);
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			scanf("%lld", &inp[i][j]);
	printf("%lld\n", func(1,1));
}