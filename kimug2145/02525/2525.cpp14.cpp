#include <iostream>
using namespace std;

int a, b, c, ssum;

int main() {
	scanf("%d %d %d", &a, &b, &c);
	ssum += a * 60 + b + c;

	int h, m;
	h = ssum / 60;
	m = ssum - h * 60;
	printf("%d %d\n", h % 24, m);
}