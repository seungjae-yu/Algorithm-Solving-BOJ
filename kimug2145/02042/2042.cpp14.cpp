#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
int N, M, K, a;

ll inp[1000005];
ll seg[3000001];

ll init(int node, int st, int ed) {

	if (st == ed) return seg[node] = inp[st];

	else return seg[node] = init(node * 2, st, (st + ed) / 2) + init(node * 2 + 1, (st + ed) / 2 + 1, ed);
}

void update(int node, int st, int ed, int sel, ll val) {

	if (sel < st || sel > ed) return;

	seg[node] = seg[node] + val;

	if (st != ed) {
		update(node * 2, st, (st + ed) / 2, sel, val);
		update(node * 2 + 1, (st + ed) / 2 + 1, ed, sel, val);
	}
}

ll sum(int node, int ml, int mr, int st, int ed) {

	if (ml > ed || mr < st) return 0;
	if (ml <= st && ed <= mr) return seg[node];

	return sum(node * 2, ml, mr, st, (st + ed) / 2) +
		sum(node * 2 + 1, ml, mr, (st + ed) / 2 + 1, ed);
}

int main() {
	scanf("%d %d %d", &N, &M, &K);

	for (int i = 0; i < N; i++)
		scanf("%lld", &inp[i]);
	init(1, 0, N - 1);

	for (int i = 0; i < M + K; i++) {
		scanf("%d", &a);
		if (a == 1) {
			int b;
			ll c;
			scanf("%d %lld", &b, &c);
			b--;
			update(1, 0, N - 1, b, c - inp[b]);
			inp[b] = c;
		}
		else if (a == 2) {
			int b, c;
			scanf("%d %d", &b, &c);
			printf("%lld\n", sum(1, b - 1, c - 1, 0, N - 1));
		}
	}
}