#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N, M, K;

int ret(int _x, int _y) {

	int arr[16][16];
	memset(arr, 0, sizeof(arr));
	for (int i = 1; i <= 15; i++) {
		for (int j = 1; j <= 15; j++) {
			if (i == 1 || j == 1) arr[i][j] = 1;
		}
	}

	for (int i = 2; i <= _x; i++) {
		for (int j = 2; j <= _y; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	return arr[_x][_y];
}

int main() {

	scanf("%d %d %d", &N, &M, &K);

	int x, y;

	x = (K - 1) / M + 1;
	y = (K - 1) % M + 1;

	printf("%d", ret(x, y) * ret(N - x + 1, M - y + 1));
}