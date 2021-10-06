#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int tc, N, M, D, inp[1005][1005], a, b, c;
#define INF 987654321
int DFS(int n, int par) {

	int ret = 0;

	for (int i = 1; i <= N; i++) {
		if (inp[n][i] > 0 && i != par) {
			ret += DFS(i, n);
		}
	}
	if (ret == 0) return inp[n][par];
	else return min(ret, inp[n][par]);
}

int main() {
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d %d", &N, &M);
		if (M == 0) {
			printf("0\n");
			continue;
		}
		memset(inp, 0, sizeof(inp));
		while (M--) scanf("%d %d %d", &a, &b, &c), inp[a][b] = inp[b][a] = c;
		
		inp[1][0] = INF;
		printf("%d\n", DFS(1, 0));
	}
}