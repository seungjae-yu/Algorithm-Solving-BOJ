#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int k, inp[1 << 22], len, ssum;

void func(int n) {
	if (n == 1) return;
	ssum += abs(inp[n] - inp[n - 1]);
	inp[n / 2] += max(inp[n], inp[n - 1]);
	func(n - 2);
}

int main() {
	scanf("%d", &k);
	len = (1 << (k + 1)) - 2;	
	for (int i = 2; i <= len + 1; i++) scanf("%d", &inp[i]), ssum += inp[i];
	func(len + 1);
	printf("%d\n", ssum);
}