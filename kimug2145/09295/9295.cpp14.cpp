#include <iostream>
using namespace std;

int tc, a, b;

int main() {
	scanf("%d", &tc);

	for (int i = 0; i < tc; i++) {
		scanf("%d %d", &a, &b);
		printf("Case %d: %d\n", i + 1, a + b);
	}

}