#include <iostream>
#include <algorithm>
using namespace std;

int tc, n, inp, m, s[1000002];

int main() {
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &s[i]);
		sort(s, s + n);
		scanf("%d", &m);		
		for (int i = 0; i < m; i++) scanf("%d", &inp), printf("%d\n", binary_search(s, s + n, inp));
	}
}