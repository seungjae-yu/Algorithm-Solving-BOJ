#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, tc;
int inp[2][100005];
int dp[3][100005];

int func(int state , int n) {

	if (n >= N) return 0;
	
	int&ret = dp[state][n];
	if (ret != -1) return ret;
	ret = 0;

	//위 , 아래 , x
	if (state != 1) ret = max(ret, func(1, n + 1) + inp[0][n]);
	if (state != 2) ret = max(ret, func(2, n + 1) + inp[1][n]);
	ret = max(ret, func(0, n + 1));

	return ret;
}

int main() {

	scanf("%d", &tc);

	while (tc--) {
		memset(dp, -1, sizeof(dp));
		memset(inp, 0, sizeof(inp));
		scanf("%d", &N);
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < N; j++)
				scanf("%d", &inp[i][j]);
		}
		printf("%d\n", func(0, 0));
	}
}