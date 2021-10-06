#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N,tc;
int dist[102][102];
#define INF 987654321

int main() {
	scanf("%d %d", &N, &tc);
	int x, y;

	for (int i = 1; i < 102; i++)
		for (int j = 1; j < 102; j++)
			dist[i][j] = INF;

	for (int i = 0; i < tc; i++) {
		scanf("%d %d", &x, &y);
		dist[x][y] = dist[y][x] = 1;
	}

	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				dist[j][i] = min(dist[j][i], dist[j][k] + dist[k][i]);
			}
		}
	}
	int cnt = 0;	
	for (int i = 2; i <= N; i++) {
		if (dist[i][1] != INF) cnt++;
	}
	cout << cnt;
}