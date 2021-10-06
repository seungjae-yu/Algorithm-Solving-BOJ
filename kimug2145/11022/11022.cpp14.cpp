#include <iostream>
int tc, a, b;
int main() {
	scanf("%d", &tc);
	for (int i = 1; i <= tc; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
}