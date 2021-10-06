#include <iostream>
using namespace std;

int a[3], b[3], as, bs;

int main() {

	for (int i = 0; i < 3; i++) scanf("%d:", &a[i]);
	for (int i = 0; i < 3; i++) scanf("%d:", &b[i]);
	as = a[0] * 3600 + a[1] * 60 + a[2];
	bs = b[0] * 3600 + b[1] * 60 + b[2];

	if (as > bs) {
		bs += 3600 * 24;
		int tt = bs - as;
		int h = tt / 3600;
		int m = (tt - h * 3600) / 60;
		int t = (tt - h * 3600) - m * 60;
		printf("%02d:%02d:%02d", h, m, t);
	}

	else {
		int tt = bs - as;
		int h = tt / 3600;
		int m = (tt - h * 3600) / 60;
		int t = (tt - h * 3600) - m * 60;
		printf("%02d:%02d:%02d", h, m, t);
	}
}