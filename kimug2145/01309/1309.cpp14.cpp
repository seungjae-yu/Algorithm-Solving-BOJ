#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int dp[100003][3];
int N;
#define R 9901
int func(int n, int pos) {

	if (n == N) return 1;
	if (n > N) return 0;

	int& ret = dp[n][pos];
	if (ret != -1) return ret;
	ret = 0;

	if (pos == 0) {
		//왼쪽
		ret = (ret + func(n + 1, 1)) % R;
		ret = (ret + func(n + 1, 2)) % R;
	}
	else if (pos == 1) {
		//오른쪽
		ret = (ret + func(n + 1, 0)) % R;
		ret = (ret + func(n + 1, 2)) % R;
	}
	else if (pos == 2) {
		//x
		ret = (ret + func(n + 1, 1)) % R;
		ret = (ret + func(n + 1, 0)) % R;
		ret = (ret + func(n + 1, 2)) % R;
	}
	return ret;
}

int main() {
	memset(dp, -1, sizeof(dp));
	scanf("%d", &N);
	printf("%d\n", (func(1, 0) % R + func(1, 1) % R + func(1, 2) % R) % R);
}