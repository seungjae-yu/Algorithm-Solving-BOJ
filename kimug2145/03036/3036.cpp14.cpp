#include <iostream>
#include <algorithm>
using namespace std;

int n, inp[102];
int mmax, mmin;
int gcd(int a, int b) {	
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main() {	
	scanf("%d", &n);	
	for (int i = 0; i < n; i++) scanf("%d", &inp[i]);
	for (int i = 1; i < n; i++) mmax = max(inp[0], inp[i]), mmin = min(inp[0], inp[i]), printf("%d/%d\n", inp[0] / gcd(mmax, mmin), inp[i] / (gcd(mmax, mmin)));
}