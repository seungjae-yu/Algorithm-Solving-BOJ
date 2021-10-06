#include <iostream>
using namespace std;

int x;

int main() {
	scanf("%d", &x);
	if (x == 64) {
		printf("1\n");
		exit(0);
	}
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			for (int k = 0; k <= 1; k++) {
				for (int l = 0; l <= 1; l++) {
					for (int m = 0; m <= 1; m++) {
						for (int n = 0; n <= 1; n++) {
							if (i * 32 + j * 16 + k * 8 + l * 4 + m * 2 + n * 1 == x) {
								printf("%d\n", i + j + k + l + m + n);
							}
						}
					}
				}
			}
		}
	}
}