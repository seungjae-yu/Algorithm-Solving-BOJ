#include <iostream>
#include <algorithm>
using namespace std;
int tc, N, A[1002], B[1002], C[1002];

int main() {
	scanf("%d", &tc);

	while (tc--) {
		int sum = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d %d %d", &A[i], &B[i], &C[i]);
			int mmax = max(A[i], max(B[i], C[i]));
			if (mmax > 0) sum += mmax;
		}
		cout << sum << "\n";
	}
}