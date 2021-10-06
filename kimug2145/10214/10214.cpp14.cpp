#include <iostream>
using namespace std;

int tc, a, b, sa, sb;

int main() {

	scanf("%d", &tc);

	while (tc--) {
		for (int i = 0; i < 9; i++) {
			scanf("%d %d", &a, &b);
			sa += a, sb += b;
		}
		if (sa > sb) printf("Yonsei\n");
		else if (sa < sb) printf("Korea\n");
		else printf("Draw\n");
	}
}