#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll a, b;

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	else gcd(b, a%b);
}

int main() {
	scanf("%lld %lld", &a, &b);

	ll c = sqrt(a);
	ll d = sqrt(b);

	if (d - c == 0) printf("0");
	else {
		ll g = gcd(b - a, d - c);		
		printf("%lld/%lld", ((d - c) / g), ((b - a) / g));
	}
}