#include <iostream>
#include <cstring>
using namespace std;

int dp[11];
int func(int N) {

	if (N == 0) return 1;
	if (N < 0) return 0;

	int &ret = dp[N];
	if (ret != -1) return ret;
	ret = 0;

	ret += func(N - 1);
	ret += func(N - 2);
	ret += func(N - 3);

	return ret;
}

int main() {

	int tc;
	int a;
	scanf("%d", &tc);
	while (tc--) {
		memset(dp, -1, sizeof(dp));
		scanf("%d", &a);
		cout << func(a) << "\n";
	}
}