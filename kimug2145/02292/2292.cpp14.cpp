#include <iostream>
using namespace std;

typedef long long ll;
ll n;
int main() {
	scanf("%lld", &n);
	ll i = 1;
	while (true) {
		if (n <= 1 + 3 * i*(i - 1)) break;
		else i++;
	}
	printf("%lld\n", i);
}