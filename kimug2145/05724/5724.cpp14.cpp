#include <iostream>
int n;
int main() {
	while (true) {
		scanf("%d", &n);
		if (n == 0) break;
		else printf("%d\n", n*(n + 1)*(2 * n + 1) / 6);
	}
}