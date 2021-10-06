#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;
ll K, N, inp[10002], ans;

int main() {
	scanf("%lld %lld", &K, &N);
	for (int i = 0; i < K; i++) scanf("%lld", &inp[i]);

	ll left = 0;
	ll right = *max_element(inp, inp + K);

	while (left <= right) {
		ll mid = (left + right) / 2;
		ll cnt = 0;
		if (mid < 1) mid = 1;

		for (int i = 0; i < K; i++)
			cnt += inp[i] / mid;

		if (cnt >= N) {
			left = mid + 1;
			ans = max(mid, ans);
		}

		else if (cnt < N) {
			right = mid - 1;
		}
	}
	printf("%lld", ans);
}