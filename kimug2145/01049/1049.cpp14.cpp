#include <iostream>
#include <algorithm>
using namespace std;

#define INF 1987654321

int n, m, ia, ib, a, b, ans;

int main() {
	a = b = INF;
	scanf("%d %d", &n, &m);

	while (m--) {
		scanf("%d %d", &ia, &ib);
		a = min(a, ia), b = min(b, ib);
	}

	ans = min(b*n, ((n / 6) + 1)*a);
	ans = min(ans, (n / 6) *a + (n - (n / 6) * 6)*b);
	printf("%d\n", ans);
}