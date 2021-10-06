#include <iostream>
#include <cmath>
using namespace std;
long long n, m;

int main() {
	scanf("%lld %lld", &n, &m);
	printf("%lld", abs(n - m));
}