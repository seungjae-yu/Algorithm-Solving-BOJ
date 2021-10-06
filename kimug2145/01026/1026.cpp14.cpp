#include <iostream>
#include <algorithm>
using namespace std;

int a[55], b[55], s, n;

bool cmp(int c, int d) {
	return c > d;
}

int main() {
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++) scanf("%d", &b[i]);
	sort(a + 1, a + 1 + n);
	sort(b + 1, b + 1 + n, cmp);
	for (int i = 1; i <= n; i++) s += a[i] * b[i];
	printf("%d\n", s);
}