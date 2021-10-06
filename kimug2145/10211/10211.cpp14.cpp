#include <iostream>
using namespace std;

int tc, inp[1005], N;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		int mmax = -1987654321;
		int chk = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &inp[i]);
			chk += inp[i];
			if (chk > mmax) mmax = chk;
			if (chk < 0) chk = 0;
		}
		printf("%d\n", mmax);
	}
}