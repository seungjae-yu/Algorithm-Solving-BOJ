#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
ll x, y;

int main() {
	while (~scanf("%lld %lld", &x, &y)) {
		ll cmp = (y * 100) / x;
		
		if (cmp >= 99) printf("-1\n");
		else {			
			ll left = 0;
			ll right = 1000000002;
			ll mid;

			while (left <= right) {
				mid = (left + right) / 2;
				if (((y + mid) * 100 / (x + mid)) > cmp) right = mid - 1;
				else left = mid + 1;
			}
			cout << left << "\n";
		}
	}
}