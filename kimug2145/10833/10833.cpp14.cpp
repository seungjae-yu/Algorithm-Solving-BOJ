#include <iostream>
using namespace std;

int n, st, ap, ans;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &st, &ap);
		ans += (ap%st);
	}
	printf("%d\n", ans);
}