#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;
int N, M;
ll inp[1000002];
ll ans;

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) scanf("%lld", &inp[i]);
	sort(inp + 1, inp + 1 + N);
	
	ll left = 1;
	ll right = inp[N];

	while (left <= right) {
		ll mid = (left + right) / 2;
		ll sum = 0;

		for (int i = 1; i <= N; i++)
			if (inp[i] > mid) sum += inp[i] - mid;
		
		if (sum >= M) {
			ans = max(ans, mid);
			left = mid + 1;
		}
		else right = mid - 1;
	}
	printf("%lld", ans);
}