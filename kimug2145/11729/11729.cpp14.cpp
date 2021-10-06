#include <iostream>
int N;

void Ha(int n, int from, int mid, int to) {

	if (n == 1) printf("%d %d\n", from, to);
	else {
		Ha(n - 1, from, to, mid);
		printf("%d %d\n", from, to);
		Ha(n - 1, mid, from, to);
	}	
}

int main() {
	scanf("%d", &N);
	printf("%d\n", (1 << N) - 1);
	Ha(N, 1, 2, 3);
}