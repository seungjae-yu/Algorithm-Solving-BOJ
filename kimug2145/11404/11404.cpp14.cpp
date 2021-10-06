#include <iostream>
#include <algorithm>
using namespace std;

int N, M, a, b, c;
int dist[111][111];

#define INF 987654321

int main() {

	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			dist[i][j] = INF;

	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &a, &b, &c);
		dist[a][b] = min(dist[a][b], c);
	}

	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (i == j || j == k || k == i) continue;
				if (dist[i][j] >= dist[i][k] + dist[k][j]) {
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (dist[i][j] == INF) printf("0 ");
			else printf("%d ", dist[i][j]);
		}
		printf("\n");
	}
}