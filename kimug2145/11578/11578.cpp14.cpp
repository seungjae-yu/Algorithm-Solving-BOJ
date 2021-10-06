#include <iostream>
#include <algorithm>
using namespace std;

int N, M, cnt, inp, cmp;
int student[1111];
const int INF = INT32_MAX;

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		scanf("%d", &cnt);
		for (int j = 0; j < cnt; j++) {
			scanf("%d", &inp);
			student[i] += 1 << (inp - 1);
		}
	}
	
	cmp = 1 << N;
	cmp--;
	
	int ans = INF;
	
	for (int i = 0; i < (1 << M); i++) {
		int ssum = 0;
		int ct = 0;
		for (int j = 0; j < (1 << M) && j < M; j++) {
			if (i & (1 << j)) {
				ssum |= student[j];
				ct++;
			}
		}
		if (ssum == cmp) { ans = min(ans, ct); }
	}

	if (ans == INF) printf("-1");
	else printf("%d", ans);
}