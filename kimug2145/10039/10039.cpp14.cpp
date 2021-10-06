#include <iostream>
using namespace std;
int inp, ssum;
int main() {	
	for (int i = 0; i < 5; i++) {
		scanf("%d", &inp);
		if (inp < 40) ssum += 40;
		else ssum += inp;
	}
	printf("%d\n", ssum / 5);
}