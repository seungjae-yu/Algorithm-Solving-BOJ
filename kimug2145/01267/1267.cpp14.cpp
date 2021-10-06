#include <iostream>
int N, inp, y, m;

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &inp), y += ((inp / 30) + 1) * 10, m += ((inp / 60) + 1) * 15;
	if (y > m) printf("M %d\n", m);
	else if (y < m) printf("Y %d\n", y);
	else printf("Y M %d\n", m);
}