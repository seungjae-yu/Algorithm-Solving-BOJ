#include <iostream>
int N, cnt, iter = 1;
int main() {
	scanf("%d", &N);
	while (true) {
		if (N == 0) break;
		if (N >= iter) N -= iter++, cnt++;
		else iter = 1;
	}
	printf("%d\n", cnt);
}