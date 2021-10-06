#include <iostream>
using namespace std;

typedef long long ll;
ll n;
int main() {
	scanf("%lld", &n);

	ll i = 1;
	while (true) {		
		if (i*(i + 1) >= n*2) break;
		else i++;
	}

	ll pos = (i*(i - 1)) / 2;
	pos = n - pos;

	if (i % 2 == 0) {
		printf("%lld/%lld\n", pos, i + 1 - pos);
	}

	else {
		printf("%lld/%lld\n", i + 1 - pos, pos);
	}
}