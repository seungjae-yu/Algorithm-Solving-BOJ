#include <iostream>
using namespace std;

#define R 1000000

long long fibo[3], n, ans, iter;

int main() {
	scanf("%lld", &n);
	fibo[0] = 0, fibo[1] = 1;
	
	iter = n % 1500000;

	for (int i = 2; i <=iter+1 ; i++) {		
		fibo[i % 3] = (fibo[(i + 1) % 3] % R + fibo[(i + 2) % 3] % R) % R;		
		ans = fibo[(i + 2) % 3] % R;
	}
	printf("%lld\n", ans);
}