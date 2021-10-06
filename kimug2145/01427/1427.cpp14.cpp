#include <iostream>
#include <algorithm>

using namespace std;

int N[10];
int c;
int idx = 0;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	
	scanf("%d", &c);
	
	while (c != 0) {
		N[idx] = c % 10;
		c = c / 10;
		idx++;
	}

	sort(N, N + idx,cmp);
	for (int i = 0; i < idx; i++) {
		printf("%d", N[i]);
	}

	printf("\n");
}