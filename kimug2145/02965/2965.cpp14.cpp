#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c, mmax, mmin;

int main() {
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", max(c - b, b - a) - 1);
}