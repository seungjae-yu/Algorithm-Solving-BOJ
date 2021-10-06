#include <iostream>
long long n;
int main() {
	scanf("%lld", &n);
	printf("%lld", (n + 1)*n*(n - 1) / 2);
}