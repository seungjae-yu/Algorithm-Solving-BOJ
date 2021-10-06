#include <iostream>
int n;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n + i; j++) {
			if (j > n - 2 - i && (j + i + n) & 1) printf("*");
			else printf(" ");
		}	
		printf("\n");
	}	
}