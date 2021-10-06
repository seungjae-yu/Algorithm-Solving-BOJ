#include <iostream>
using namespace std;

long long fibo[22];
int n;
int main() {
	scanf("%d", &n);
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i <= n; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
	printf("%lld\n", fibo[n]);
}