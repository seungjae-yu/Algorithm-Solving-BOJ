#include <iostream>
using namespace std;

int tc, s, n, aa, bb;

int main() {
	scanf("%d", &tc);

	while (tc--) {		
		scanf("%d %d", &s, &n);
		int ans = s;
		for (int i = 0; i < n; i++) scanf("%d %d", &aa, &bb), ans += aa*bb;
		printf("%d\n", ans);
	}
}