#include <iostream>
using namespace std;

int a, b;

int main() {

	while (true) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) exit(0);
		printf("%d %d / %d\n", a / b, a - (a / b)*b, b);
	}
}