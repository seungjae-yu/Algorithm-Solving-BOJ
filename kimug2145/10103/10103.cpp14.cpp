#include <iostream>
using namespace std;

int n, a, b, c, d;

int main() {
	scanf("%d", &n);

	while (n--) {
		scanf("%d %d", &a, &b);
		if (a < b) c -= b;
		else if (a > b) d -= a;
	}
	printf("%d\n%d\n", c + 100, d + 100);
}