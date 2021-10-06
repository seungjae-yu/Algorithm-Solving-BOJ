#include <iostream>
int N;
int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {	
		for (int j = N ; j - i > 0; j--) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}