#include <iostream>
#include <algorithm>
using namespace std;

int N, inp[1005], dp[1005], mmax;

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) scanf("%d", &inp[i]);

	for (int i = 1; i <= N; i++) {
		int mmin = 0;
		for (int j = 0; j < i; j++) {
			if (inp[i] < inp[j]) {
				mmin = max(mmin, dp[j]);
			}
		}
		dp[i] = mmin +1;
		mmax = max(mmax, dp[i]);
	}
	printf("%d", mmax);
}