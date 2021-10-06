#include <iostream>
#include <algorithm>
using namespace std;

int N, M, K, inp[1002];

int main() {

	scanf("%d %d %d", &N, &M, &K);
	for (int i = 0; i < N; i++) scanf("%d", &inp[i]);
	sort(inp, inp + N);

	int cnt = 0;
	int cmp = M*K;
	int ssum = 0;
	for (int i = N-1; i >= 0; i--) {
		ssum += inp[i];
		cnt++;
		if (ssum >= cmp) break;
	}
	if (ssum < cmp) printf("STRESS");
	else printf("%d", cnt);
}