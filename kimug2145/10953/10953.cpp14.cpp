#include <iostream>
int N, a, b;
int main() {
	scanf("%d", &N);
	while (N--) {
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}
}