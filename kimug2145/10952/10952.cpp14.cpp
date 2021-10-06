#include <iostream>
using namespace std;
int a, b;
int main() {
	while (true) {
		scanf("%d %d", &a, &b);
		if (!a && !b) break;
		printf("%d\n", a + b);
	}
}