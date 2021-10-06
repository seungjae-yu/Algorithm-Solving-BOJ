#include <iostream>
using namespace std;

int tc, a, b;

int main() {	
	scanf("%d", &tc);

	while (tc--) {
		scanf("%d %d", &a, &b);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", a / b, a%b);
	}
}