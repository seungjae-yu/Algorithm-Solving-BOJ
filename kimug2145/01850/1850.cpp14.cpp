#include <iostream>
using namespace std;

long long int gcd(long long int x, long long int y) {
	while (y != 0) {
		long long int r = x%y;
		x = y;
		y = r;
	}
	return x;
}

int main() {

	long long int a, b;

	scanf("%lld %lld", &a, &b);

	long long int ans = gcd(a, b);

	for (int i = 0; i < ans; i++)
		printf("%d", 1);
}