#include <iostream>
#include <algorithm>
using namespace std;
int a, b, c, d, p, ssum;

int main() {
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);

	if (p <= c) ssum = b;
	else ssum = b + (p - c)*d;

	cout << min(a*p, ssum);
}