#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int x, y, w, h, a, b, c, d;

int main() {
	scanf("%d %d %d %d", &x, &y, &w, &h);
	a = abs(h - y);
	b = y;
	c = abs(w - x);
	d = x;
	printf("%d", min(min(a, b), min(c, d)));
}