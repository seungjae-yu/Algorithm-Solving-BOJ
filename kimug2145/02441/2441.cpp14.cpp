#include <iostream>
int N;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++)
			printf(" ");

		for (int k = N; k > i; k--)
			printf("*");

		printf("\n");
	}
}