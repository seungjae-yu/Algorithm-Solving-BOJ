#include <iostream>
using namespace std;

int tc, n;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);

		if (n == 1) printf("#\n");
		else if (n == 2) printf("##\n##\n");
		else {
			for (int j = 0; j < n; j++) printf("#");
			printf("\n");
			for (int i = 0; i < n - 2; i++) {
				for (int j = 0; j < n; j++) {
					if (j == 0 || j == n - 1) printf("#");
					else printf("J");
				}
				printf("\n");
			}
			for (int j = 0; j < n; j++) printf("#");
			printf("\n");
		}
		if (tc > 0) printf("\n");
	}
}