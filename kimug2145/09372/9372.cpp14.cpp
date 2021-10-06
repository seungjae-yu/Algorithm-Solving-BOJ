#include <iostream>
using namespace std;
int tc, N, M, a, b;

int main() {
	scanf("%d", &tc);

	while (tc--) {
		scanf("%d %d", &N, &M);
		while (M--) {
			scanf("%d %d", &a, &b);
		}
		printf("%d\n", N - 1);
	}
}