#include <iostream>
#include <algorithm>
using namespace std;

int N, inp[55];
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &inp[i]);
	sort(inp, inp + N);
	printf("%d\n", inp[0] * inp[N - 1]);
}