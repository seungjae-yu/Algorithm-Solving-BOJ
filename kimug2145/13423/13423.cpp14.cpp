#include <iostream>
#include <algorithm>
using namespace std;

int tc, N;
int arr[1005];

int main() {

	scanf("%d", &tc);

	while (tc--) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);
		}

		sort(arr, arr + N);
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N - 1; j++) {
				if (binary_search(arr + j + 1, arr + N, 2 * arr[j] - arr[i])) {
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
}