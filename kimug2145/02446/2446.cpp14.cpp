#include <iostream>
#include <cmath>
using namespace std;
int n;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < n - 1 - abs(n - 1 - i); j++) printf(" ");
		for (int k = 0; k < 2 * abs(n - 1 - i) + 1; k++) printf("*");
		printf("\n");
	}
}