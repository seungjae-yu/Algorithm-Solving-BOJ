#include <iostream>
using namespace std;

int t, a, b, c;

int main() {
	scanf("%d", &t);
	if (t % 10 != 0) {
		printf("-1");
		exit(0);
	}

	a = t / 300;
	b = (t - a * 300) / 60;
	c = (t - (b * 60))/10;
	printf("%d %d %d\n", a, b, c);
}