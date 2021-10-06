#include <iostream>
#include <algorithm>
using namespace std;

int tc;
long long a, b;

long long gcd(long long a, long long b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main() {
	scanf("%d", &tc);
	while (tc--) {
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", a*b / gcd(max(a, b), min(a, b)));
	}
}