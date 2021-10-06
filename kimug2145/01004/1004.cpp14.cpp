#include <iostream>
using namespace std;

int tc, n, X1, Y1, X2, Y2;
int cx, cy, r;

int main() {
	scanf("%d", &tc);

	while (tc--) {
		int cnt = 0;
		scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d %d %d", &cx, &cy, &r);
			int d1 = (X1 - cx)*(X1 - cx) + (Y1 - cy)*(Y1 - cy);
			int d2 = (X2 - cx)*(X2 - cx) + (Y2 - cy)*(Y2 - cy);

			if (d1 <= r*r && d2 <= r*r) continue;
			if (d1 <= r*r) cnt++;
			if (d2 <= r*r) cnt++;
		}
		printf("%d\n", cnt);
	}
}