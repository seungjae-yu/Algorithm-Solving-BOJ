#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N;
int dp[32770][182][4];
#define INF 987654321

int func(int n, int chk, int sz) {

	if (n == 0) return 1;
	if (sz == 4) return 0;
	if (chk == 182) return 0;

	int&ret = dp[n][chk][sz];
	if (ret != -1) return ret;
	ret = 0;

	ret = func(n, chk + 1, sz);
	if(n-chk*chk >=0) ret += func(n - chk*chk, chk , sz + 1);

	return ret;
}

int main() {
	memset(dp, -1, sizeof(dp));
	while (true) {
		scanf("%d", &N);
		if (N == 0) exit(0);
		printf("%d\n", func(N, 1,0));
	}
}