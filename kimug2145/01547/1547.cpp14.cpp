#include <iostream>
using namespace std;

int M, a, b, cmp = 1;

int main() {
	scanf("%d", &M);

	while (M--) {
		scanf("%d %d", &a, &b);
		if (a == cmp) cmp = b;
		else if (b == cmp) cmp = a;
	}
	printf("%d\n", cmp);
}