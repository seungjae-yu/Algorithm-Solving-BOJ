#include <iostream>
#include <algorithm>
using namespace std;

long long N, K, Q;
long long x, y;

int main() {
	scanf("%lld %lld %lld",&N,&K,&Q);

	while (Q--) {
		scanf("%lld %lld",&x,&y);
		if (K == 1) {
			printf("%lld\n", abs(x - y));
			continue;
		}
		long long cnt = 0;
		while (x != y) {

			if (x < y) swap(x, y);

			x = (x - 2) / K + 1;
			cnt++;
		}
		printf("%lld\n", cnt);
	}

}