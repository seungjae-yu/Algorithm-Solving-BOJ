#include <iostream>
using namespace std;

int n;
int inp[66][66];

void func(int y, int x, int sz) {

	bool chk = true;

	for (int i = y; (i < y + sz) && chk; i++) {
		for (int j = x; j < x + sz; j++) {
			if (inp[i][j] == inp[y][x]) continue;
			else {
				chk = false;
				break;
			}
		}
	}

	if (chk) printf("%d", inp[y][x]);
	else {
		printf("(");
		func(y, x, sz / 2);
		func(y, x + sz / 2, sz / 2);
		func(y + sz / 2, x, sz / 2);
		func(y + sz / 2, x + sz / 2, sz / 2);
		printf(")");
	}
}

int main() {
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%1d", &inp[i][j]);

	func(1, 1, n);
}