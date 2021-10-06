#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int tc, r1, r2;
int X1, X2, Y1, Y2;

int dist(int x1, int x2, int y1, int y2) {
	return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}

int main() {
	scanf("%d", &tc);

	while (tc--) {
		scanf("%d %d %d %d %d %d", &X1, &Y1, &r1, &X2, &Y2, &r2);
		int d = dist(X1, X2, Y1, Y2);
		int rs = (r1 + r2)*(r1 + r2);
		int rm = (r1 - r2)*(r1 - r2);

		if (d == 0 && rm == 0) printf("-1\n");
		else if (rm < d && d < rs) printf("2\n");
		else if (rm == d || rs == d) printf("1\n");
		else printf("0\n");
	}
}