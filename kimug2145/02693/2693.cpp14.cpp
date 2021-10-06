#include <iostream>
#include <algorithm>
using namespace std;

int a[10], tc;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		for (int i = 0; i < 10; i++) scanf("%d", &a[i]);
		sort(a, a + 10);
		printf("%d\n", a[7]);
	}
}