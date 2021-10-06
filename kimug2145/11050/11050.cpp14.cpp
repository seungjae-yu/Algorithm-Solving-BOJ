#include <iostream>
using namespace std;

int N, K, ans = 1, cnt;

int main() {
	scanf("%d %d", &N, &K);
	cnt = K;
	while (cnt--) {
		ans *= N;
		N--;
	}

	while (K >=1) {
		ans /= K;
		K--;
	}
	printf("%d\n", ans);
}