#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int T, W, inp;
int dp[1004][33][2]; //초,움직인횟수,자두나무2개
bool jadu[1004];
#define INF 987654321

int func(int t, int cnt, bool pos) {

	if (cnt > W || t > T) return 0;

	int& ret = dp[t][cnt][pos];
	if (ret != -1) return ret;
	ret = -INF;
	
	//안움직일때 움직일때
	ret = max(ret, max(func(t + 1, cnt, pos), func(t + 1, cnt + 1, !pos))) + !(pos^jadu[t]);

	return ret;
}

int main() {

	scanf("%d %d", &T, &W);
	for (int i = 1; i <= T; i++) {
		scanf("%d", &inp);
		jadu[i] = (inp - 1);
	}
	memset(dp, -1, sizeof(dp));
	
	cout << max(func(1, 0, 0), func(1, 1, 1));
}