#include <iostream>
using namespace std;

int ssum, inp, ss;

int main() {
	scanf("%d", &ss);
	for (int i = 0; i < 9; i++) scanf("%d", &inp), ssum += inp;
	printf("%d\n", ss - ssum);
}