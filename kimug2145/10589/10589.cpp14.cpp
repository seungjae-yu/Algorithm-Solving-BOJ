#include <iostream>
int r, c;
int main() {
	scanf("%d %d", &r, &c);
	printf("%d\n", r / 2 + c / 2);
	for (int i = 2; i <= r; i += 2) printf("%d %d %d %d\n", i, 1, i, c);
	for (int i = 2; i <= c; i += 2) printf("%d %d %d %d\n", 1, i, r, i);
}