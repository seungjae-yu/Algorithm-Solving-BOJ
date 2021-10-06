#include <iostream>
#include <cmath>
using namespace std;
int tc, a, b;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d %d", &a, &b);
		a = a % 10;
		if (a == 0) printf("10\n");
		else if (a == 1 || a == 5 || a == 6) printf("%d\n", a);
		else if (a == 2 || a == 3 || a == 7 || a == 8) {
			if (b % 4 == 0) printf("%d\n", (int)pow(a, 4) % 10);
			else printf("%d\n", (int)pow(a, b % 4) % 10);
		}
		else if (a == 4 || a == 9) {
			if (b % 2 == 0)  printf("%d\n", (int)pow(a, 2) % 10);
			else printf("%d\n", (int)pow(a, b % 2) % 10);
		}
	}
}