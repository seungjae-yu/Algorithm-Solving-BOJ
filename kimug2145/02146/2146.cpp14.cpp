#include <iostream>
#include <cstring>
#include <algorithm>
#include <tuple>
#include <vector>
using namespace std;

int N, na;
int inp[105][105];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
#define INF 987654321

void DFS(int x, int y, int land) {

	inp[x][y] = land;

	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx >= 1 && yy >= 1 && xx <= N&&yy <= N && inp[xx][yy] == 1) {
			DFS(xx, yy, land);
		}
	}
}

int main() {
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			scanf("%d", &inp[i][j]);

	int cnt = 2;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (inp[i][j] == 1) {
				DFS(i, j, cnt++);
			}
		}
	}

	vector< tuple <int, int, int> >q;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {

			if (inp[i][j]) {
				for (int k = 0; k < 4; k++) {
					int xx = i + dx[k];
					int yy = j + dy[k];

					if (xx >= 1 && yy >= 1 && xx <= N && yy <= N && inp[xx][yy] == 0) {
						q.push_back(make_tuple(inp[i][j] - 2, i, j));
					}
				}
			}
		}
	}

	int ans = INF;
	for (int i = 0; i < q.size(); i++) {		
		for (int j = 0; j < q.size(); j++) {
			int land_i = get<0>(q[i]);
			int land_j = get<0>(q[j]);
			if (land_i == land_j) continue;

			ans = min(ans, abs(get<1>(q[i]) - get<1>(q[j])) + abs(get<2>(q[i]) - get<2>(q[j])) );
		}
	}
    
	if (ans == INF) printf("0");
	else printf("%d", ans - 1);
}