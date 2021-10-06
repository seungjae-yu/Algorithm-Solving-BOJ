#include <iostream>
#include <algorithm>
using namespace std;

int tc, mmax, mmin, x, y;

int gcd(int a, int b) {	
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main() {	
	scanf("%d", &tc);	
	
	while (tc--) {
		scanf("%d %d", &x, &y);
		mmax = max(x, y), mmin = min(x, y);
		printf("%d %d\n", mmax*mmin / gcd(mmax, mmin), gcd(mmax, mmin));
	}	
}