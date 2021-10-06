#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int T, k, p;
typedef pair<int, int> pii;
pii money[111];
int dp[100][10005];

bool cmp(pii a, pii b) {
	return a.first > b.first;
}

int func(int n, int r) {

	if (r == 0) return 1;
	if (r < 0) return 0;	
	if (n >= k) return 0;

	int&ret = dp[n][r];
	if (ret != -1) return ret;
	ret = 0;

	ret += func(n + 1, r);
	for (int i = 0; i < money[n].second; i++) {
		if (r - money[n].first * (i + 1) >= 0) ret += func(n + 1, r - money[n].first*(i + 1));
	}

	return ret;
}


int main() {
	scanf("%d %d", &T, &k);
	for (int i = 0; i < k; i++) scanf("%d %d", &money[i].first, &money[i].second);
	sort(money, money + k, cmp);
	memset(dp, -1, sizeof(dp));
	printf("%d\n", func(0, T));
}