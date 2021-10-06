#include <iostream>

int N, K, cnt;
int money[11];

int main() {

	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) scanf("%d", &money[i]);

	for (int i = N; i > 0; i--) {
		cnt += K / money[i];
		K %= money[i];
	}
	printf("%d", cnt);
}