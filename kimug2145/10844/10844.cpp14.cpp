#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, ans;
int dp[11][102];
#define R 1000000000

int func(int now, int l) {

	if (now == 0 && l == 1) return 0;
	if (now > 9 || now < 0) return 0;
	if (l == N) return 1;

	int& ret = dp[now][l];
	if (ret != -1) return ret;
	ret = 0;

	ret = (ret + func(now - 1, l + 1) % R + func(now + 1, l + 1) % R) % R;

	return ret;
}

int main() {

	memset(dp, -1, sizeof(dp));

	scanf("%d", &N);

	for (int i = 0; i < 10; i++) {
		ans = (ans + func(i, 1)) % R;
	}
	printf("%d", ans);
}