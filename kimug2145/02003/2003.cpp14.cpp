#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, M, sum, lo, hi, ans;
int inp[10004];

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) scanf("%d", &inp[i]);
	
	while (true) {
		if (sum >= M) sum -= inp[lo++];
		else if (hi == N) break;
		else sum += inp[hi++];
		if (sum == M) ans++;
	}
	printf("%d\n", ans);
}