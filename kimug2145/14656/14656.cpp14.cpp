#include <iostream>
int N, inp[20002], cnt;
int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) scanf("%d", &inp[i]);
	for (int i = 1; i <= N; i++) cnt += !(i - inp[i]);
	printf("%d\n", N-cnt);
}