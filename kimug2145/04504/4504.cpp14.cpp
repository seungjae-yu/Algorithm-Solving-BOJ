#include <iostream>
using namespace std;

int n, inp;

int main() {
	scanf("%d", &n);
	while (true) {
		scanf("%d", &inp);
		if (inp == 0) break;
		if (inp%n != 0) printf("%d is NOT a multiple of %d.\n", inp, n);
		else printf("%d is a multiple of %d.\n", inp, n);
	}
}