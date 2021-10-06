#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef long long ll;
int tc, N, K, M;
ll inp[100005];
int main() {

	scanf("%d", &tc);

	while (tc--) {		
		scanf("%d %d %d", &N, &M, &K);

		for (int i = 0; i < N; i++) scanf("%lld", &inp[i]);

		int cnt = 0;
		ll ssum = 0;
		for (int i = 0; i < M; i++) {
			ssum += inp[i];
		}

		if (ssum < K) cnt++;

		if (N == M) {
			if (ssum < K) printf("1\n");
			else printf("0\n");
			continue;
		}

		for (int i = 1; i < N; i++) {			
			int tmp = (i + M - 1) % N;
			ssum = ssum - inp[i - 1] + inp[tmp];
			if (ssum < K) {				
				cnt++;				
			}
		}
		cout << cnt << "\n";
	}
}