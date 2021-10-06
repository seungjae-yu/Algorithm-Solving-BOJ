#pragma warning(disable: 4996)
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int n, k;
int w[101], v[101], dp[101][100001];

#define INF 1987654321;

int func(int idx, int r) {

	if (idx > n) return 0;

	int & ret = dp[idx][r];
	if (ret != -1) return ret;
	ret = 0;

	if(r-w[idx] >= 0)
		ret = max(ret, func(idx + 1, r - w[idx]) + v[idx]);
	
	ret = max(ret, func(idx + 1, r));

	return ret;
}


int main() {
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) scanf("%d %d", &w[i], &v[i]);
	memset(dp, -1, sizeof(dp));
	printf("%d\n", func(0, k));
}