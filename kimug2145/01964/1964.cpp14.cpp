#include <iostream>
using namespace std;
#define R 45678

long long n, res;

int main()
{
	scanf("%lld", &n);

	if (n % 2 == 1) {
		res = (n + 1) * 3 - 2;
		printf("%lld", (5 + ((((7 + res) % R) % R)*(n - 1) / 2) % R) % R);
	}
	else {
		res = n * 3 - 2;
		printf("%lld", (5 + ((7 + res) % R) % R * (n - 2) / 2 % R + ((n + 1) * 3 - 2)) % R);
	}
}