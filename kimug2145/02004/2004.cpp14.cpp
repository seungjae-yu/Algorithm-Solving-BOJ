#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long long ll;
ll n, m;
ll c1, c2, c3, c4, c5, c6;
int main() {
	cin >> n >> m;

	for (ll i = 5; i <= n; i *= 5) c1 += n / i;
	for (ll i = 2; i <= n; i *= 2) c2 += n / i;
	for (ll i = 5; i <= m; i *= 5) c3 += m / i;
	for (ll i = 2; i <= m; i *= 2) c4 += m / i;
	for (ll i = 5; i <= (n - m); i *= 5) c5 += (n - m) / i;
	for (ll i = 2; i <= (n - m); i *= 2) c6 += (n - m) / i;

	cout << min(c1 - c3 - c5, c2 - c4 - c6);
}