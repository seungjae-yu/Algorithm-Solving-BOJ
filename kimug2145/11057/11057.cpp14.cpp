#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int N;
#define R 10007

int dp[11][1002];

int func(int now, int len) {

	if (len == N) return 1;

	int&ret = dp[now][len];
	if (ret != -1) return ret;
	ret = 0;

	for (int i = now; i <= 9; i++) {
		ret = ((ret % R) + func(i, len + 1) % R) % R;
	}

	return ret;
}

int main() {
	scanf("%d", &N);
	memset(dp, -1, sizeof(dp));
	printf("%d\n", func(0, 0) % R);
}