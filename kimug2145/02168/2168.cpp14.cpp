#include <iostream>

int x, y, tmp;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main() {
	scanf("%d %d", &x, &y);
	if (y > x) tmp = x, x = y, y = tmp;
	printf("%d", x + y - gcd(x, y));
}