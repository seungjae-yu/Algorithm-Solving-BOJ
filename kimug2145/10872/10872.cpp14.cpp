#include <iostream>
#include <algorithm>
using namespace std;

int N;

long long fac[15];

int main() {
	fac[0] = 1;
	fac[1] = 1;

	scanf("%d", &N);
	for (long long i = 2; i <= 13; i++) {
		fac[i] = fac[i - 1] * i;
	}
	printf("%lld\n", fac[N]);
}