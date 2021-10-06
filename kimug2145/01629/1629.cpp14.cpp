#include <iostream>
using namespace std;

typedef long long ll;

ll a, b, c, ans;

ll func(ll x, ll y) {
	if (y == 0) return 1;
	else if (y == 1) return x%c;
	if (y % 2) return x*func((x*x) % c, (y / 2)) % c;
	else return func((x*x) % c, y / 2) % c;
}

int main() {
	scanf("%lld %lld %lld", &a, &b, &c);
	a %= c;
	ans = func(a, b);
	cout << ans << "\n";
}