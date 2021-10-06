#include <iostream>
int arr[301][301];
int n, m, k, a;
int sx, ex, sy, ey;

int main() {

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a);
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + a;
		}
	}
	scanf("%d", &k);

	while(k--){
		scanf("%d %d %d %d", &sx, &sy, &ex, &ey);
		printf("%d\n", arr[ex][ey] - arr[sx - 1][ey] - arr[ex][sy - 1] + arr[sx - 1][sy - 1]);
	}
}