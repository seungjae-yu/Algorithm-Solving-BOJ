#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int N, M, V;
int grp[1001][1001];
bool chk[1001];
int x, y;

void DFS(int v) {

	if (chk[v] == 0) {
		printf("%d ", v);
		chk[v] = 1;
		for (int i = 1; i <= N; i++) {
			if (grp[v][i] == 1)
				DFS(i);
		}
	}
}

void BFS() {
	int temp;
	queue<int> q;

	q.push(V);
	chk[V] = 1;
	while (!q.empty()) {

		temp = q.front();		
		printf("%d ", temp);
		q.pop();

		for (int i = 1; i <= N; i++) {
			if (chk[i] == 0 && grp[temp][i] == 1) {
				q.push(i);
				chk[i] = 1;
			}
		}
	}
}

int main() {
	scanf("%d %d %d", &N, &M, &V);
	for (int i = 1; i <= M; i++) {
		scanf("%d %d", &x, &y);
		grp[x][y] = grp[y][x] = 1;
	}

	DFS(V);
	printf("\n");
	memset(chk, 0, sizeof(chk));
	BFS();
	printf("\n");
}