#include <iostream>
#include <algorithm>
int N, a, b = 1000001, c = -1000001;
int main() {
	scanf("%d", &N);
	while (N--) scanf("%d", &a), b = std::min(a, b), c = std::max(a, c);
	printf("%d %d", b, c);
}