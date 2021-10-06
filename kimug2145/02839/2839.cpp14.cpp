#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N;
int dp[5001];
#define INF 987654321

int func(int n) {

	if (n < 0) return INF;
	if (n == 0) return 0;
	
	int &ret = dp[n];

	if (ret != -1) return ret;
	ret = INF;

	ret = min(ret ,  func(n - 3) + 1);
	ret = min(ret , func(n - 5) + 1);
	
	return ret;
}

int main() {

	memset(dp, -1, sizeof(dp));
	scanf("%d", &N);

	int ans = func(N);

	if (ans != INF) printf("%d", ans);
	else printf("-1");

}