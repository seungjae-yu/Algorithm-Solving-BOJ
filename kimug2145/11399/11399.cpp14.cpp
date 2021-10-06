#include <iostream>
#include <algorithm>
using namespace std;

int inp[1003], N;

int main() {

	scanf("%d", &N);

	for (int i = 0; i < N; i++) scanf("%d", &inp[i]);

	sort(inp, inp + N);
	
	int ans = 0;

	for (int i = 0; i < N; i++)
		ans += inp[i] * (N - i);

	printf("%d\n", ans);
}