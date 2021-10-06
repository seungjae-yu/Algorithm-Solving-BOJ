#include <iostream>
#include <algorithm>
using namespace std;

int n;

typedef long long ll;
ll inp[10005];
ll cmp;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%lld", &inp[i]);
	scanf("%lld", &cmp);

	sort(inp, inp + n);

	ll left = 0;
	ll right = inp[n - 1];
	ll mid;
	while (left <= right) {
		ll ssum = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < n; i++)
			ssum += ((mid - inp[i]) > 0 ? inp[i] : mid);

		if (ssum <= cmp) left = mid + 1;
		else right = mid - 1;
	}

	cout << right << "\n";

}