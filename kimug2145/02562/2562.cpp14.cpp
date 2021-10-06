#include <iostream>
#include <algorithm>
using namespace std;

int inp;
int mmax, idx;
int main() {

	for (int i = 0; i < 9; i++) {
		scanf("%d", &inp);
		if (inp > mmax) mmax = inp, idx = i + 1;
	}
	printf("%d\n%d\n", mmax, idx);

}