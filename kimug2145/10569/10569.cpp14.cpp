#include <iostream>
using namespace std;

int tc, v, e;
int main() {
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d %d", &v, &e);
		printf("%d\n", 2 - v + e);
	}
}