#include <iostream>
using namespace std;

int inp, ssum;

int main() {
	while (~scanf("%d", &inp)) {
		ssum += inp;
	}
	printf("%d\n", ssum);
}