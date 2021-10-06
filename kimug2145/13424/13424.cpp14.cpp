#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N, M, K, tc;
int a, b, c;
int arr[105][105];
int fnd[105];
#define INF 987654321

int main() {

	scanf("%d", &tc);
	while (tc--) {
		scanf("%d %d", &N, &M);

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
			{
				if (i == j) continue;
				else arr[i][j] = INF;
			}

		for (int i = 0; i < M; i++) {
			scanf("%d %d %d", &a, &b, &c);
			arr[a - 1][b - 1] = c;
			arr[b - 1][a - 1] = c;
		}

		scanf("%d", &K);
		for (int i = 0; i < K; i++) scanf("%d", &fnd[i]);

		for (int k = 0; k < N; k++) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (i == j || j == k || k == i) continue;
					if (arr[i][j] > arr[i][k] + arr[k][j])
						arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
		int bef = INF;
		int ans = INF;
		for (int i = 0; i < N; i++) {
			int ssum = 0;
			for (int j = 0; j < K; j++) {
				ssum += arr[i][fnd[j]-1];
				//cout << arr[i][fnd[j] - 1] << "+";
			}
			//cout << "\n";
			if (ssum < bef) {				
				bef = ssum;				
				ans = i;
				if (ssum == bef) ans = min(ans, i);
			}
		}
		cout << ans + 1 << "\n";
	}
}