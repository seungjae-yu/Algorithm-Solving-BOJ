#include <iostream>
using namespace std;
int n;
int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n + i; j++) {			
			if (j == n - 1 - i || j == n - 1 + i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}