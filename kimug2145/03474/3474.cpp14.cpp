#include <iostream>
using namespace std;
int tc;
long long inp;

int main() {
	scanf("%d", &tc);

	while (tc--) {
		long long cnt = 0;
		scanf("%lld", &inp);		
		for (int i = 5; i <= inp; i *= 5) cnt += inp / i;
		printf("%lld\n", cnt);
	}
}