#include <iostream>
using namespace std;

int tc, n, inp, ssum;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		ssum = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &inp), ssum += inp;
		printf("%d\n", ssum);
	}
}