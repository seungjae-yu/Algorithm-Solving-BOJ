#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

char cmd;
int N, K, c1, c2;
vector<int> inp, seg;

int init(int node, int st, int ed) {
	if (st == ed) return seg[node] = inp[st];
	else return seg[node] = init(node * 2, st, (st + ed) / 2) * init(node * 2 + 1, (st + ed) / 2 + 1, ed);
}

int func(int node, int st, int ed, int left, int right) {
	if (left > ed || right < st) return 1;
	if (left <= st && ed <= right) return seg[node];
	return func(node * 2, st, (st + ed) / 2, left, right) * func(node * 2 + 1, (st + ed) / 2 + 1, ed, left, right);
}

int update(int node, int st, int ed, int idx, int val) {
	if (ed < idx || idx < st) return seg[node];
	if (st == ed) return seg[node] = val;
	return seg[node] = update(node * 2, st, (st + ed) / 2, idx, val) *update(node * 2 + 1, (st + ed) / 2 + 1, ed, idx, val);
}

int main() {
	while (~scanf("%d %d", &N, &K)) {
		inp.resize(N);
		for (int i = 0; i < N; i++) { scanf("%d", &inp[i]); if (inp[i]) inp[i] = (inp[i] > 0 ? 1 : -1); }

		int h = (int)ceil(log2(N));
		seg.resize(1 << (h + 1));
		init(1, 0, N - 1);

		for (int i = 0; i < K; i++) {
			getchar();
			scanf("%c %d %d", &cmd, &c1, &c2);

			if (cmd == 'C') {				
				if (c2) c2 = (c2 > 0 ? 1 : -1);
				inp[c1 - 1] = c2;
				update(1, 0, N - 1, c1 - 1, c2);
			}
			else {				
				int ret = func(1, 0, N - 1, c1 - 1, c2 - 1);
				if (ret > 0) printf("+");
				else if (ret < 0) printf("-");
				else printf("0");
			}
		}
		printf("\n");
	}
}