#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, inp[17][17];
int dp[17][65538];
#define INF 1987654321

int func(int n, int chk) {

	if (chk == (1 << N) - 1) return inp[n][0];

	int&ret = dp[n][chk];
	if (ret != -1) return ret;
	ret = INF;

	for (int i = 0; i < N; i++) {
		if (chk&(1 << i)) continue;
		if (inp[n][i] == INF) continue;
		ret = min(ret, func(i, chk | (1 << i)) + inp[n][i]);
	}

	return ret;
}

int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &inp[i][j]);
			if (inp[i][j] == 0) inp[i][j] = INF;
		}
	}
	memset(dp, -1, sizeof(dp));
	printf("%d", func(0, 1));
}