#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, M, a, b;
int dis[102][102];
#define INF 987654321
int main() {

	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			dis[i][j] = INF;
	}


	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		dis[a][b] = dis[b][a] = 1;
	}

	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {				
				if (dis[i][j] > dis[i][k] + dis[k][j])
					dis[i][j] = dis[i][k] + dis[k][j];
			}
		}
	}

	int mmin = INF;
	int ans = 0;
	for (int i = 1; i <= N; i++) {
		int tmp = 0;
		for (int j = 1; j <= N; j++)
			tmp += dis[i][j];
		if (tmp < mmin) {
			mmin = tmp;
			ans = i;
		}
	}
	printf("%d", ans);
}