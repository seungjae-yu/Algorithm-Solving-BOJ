#include <iostream>
#include <algorithm>
using namespace std;

int inp, mmin = 1000, ssum;

int main() {

	for(int i=0;i<7;i++){
		scanf("%d", &inp);
		if (inp % 2 == 1) {
			ssum += inp;
			if (inp < mmin) mmin = inp;
		}
	}
	if (mmin == 1000) {
		printf("-1");
		exit(0);
	}
	printf("%d\n%d\n", ssum, mmin);
}