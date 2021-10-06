#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c, d;

int gcd(int aa, int bb) {
	if (bb == 0) return aa;
	else return gcd(bb, aa%bb);
}

int main() {	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int ff = b*d;
	int rr = a*d + b*c;
	int r = gcd(max(ff, rr), min(ff, rr));
	
	printf("%d %d\n", rr / r, ff / r);
}