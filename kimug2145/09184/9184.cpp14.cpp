#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int dp[22][22][22];

int w(int a, int b, int c) {

	if (a > 20) a = 21;
	if (b > 20) b = 21;
	if (c > 20) c = 21;

	if (a < 0) a = 0;
	if (b < 0) b = 0;
	if (c < 0) c = 0;

	int& ret = dp[a][b][c];

	if (ret != -1) return ret;

	if (a <= 0 || b <= 0 || c <= 0) return 1;

	if (a > 20 || b > 20 || c > 20) return ret = w(20, 20, 20);

	if (a < b && b < c)
		return ret = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);

	return ret = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);

}

int main() {

	int x, y, z;
	memset(dp, -1, sizeof(dp));
	while (true) {

		scanf("%d %d %d", &x, &y, &z);
		if (x == -1 && y == -1 && z == -1) break;

		printf("w(%d, %d, %d) = %d\n", x,y,z, w(x, y, z));
	}

}