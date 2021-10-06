#include <iostream>
int inp[101], ans, tc;
int main() {
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) scanf("%1d", &inp[i]), ans += inp[i];
	printf("%d", ans);
}