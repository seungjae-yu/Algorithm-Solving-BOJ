#include <iostream>
#include <algorithm>
using namespace std;

int n, inp[3], mmax;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &inp[i]), mmax = max(mmax, inp[i]);
	for (int i = 1; i <= mmax; i++) {
		bool chk = true;
		for (int j = 0; j < n; j++) if (inp[j] % i != 0) chk = false;
		if(chk) printf("%d\n", i);
	}
}