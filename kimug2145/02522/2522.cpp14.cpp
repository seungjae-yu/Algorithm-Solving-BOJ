#include <iostream>
using namespace std;
int n;
int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--) printf(" ");
		for (int k = 0; k < i + 1; k++) printf("*");
		printf("\n");

	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1;j>0; j--) printf(" ");
		for (int k = 0; k < n - i - 1; k++) printf("*");
		printf("\n");
	}
}