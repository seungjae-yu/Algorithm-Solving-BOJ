#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

ll N, a, b, M;
vector<ll> inp;
vector<ll> bg,sm;
#define INF 1987654321

ll init(vector<ll> &inp, vector<ll> &seg, int node, int st, int  ed, bool mode) {
	if (st == ed) return seg[node] = inp[st];
	else {
		return seg[node] = (mode == true) ?
			 min(init(inp, seg, node * 2, st, (st + ed) / 2, mode), init(inp, seg, node * 2 + 1, (st + ed) / 2 + 1, ed, mode))
			: max(init(inp, seg, node * 2, st, (st + ed) / 2, mode), init(inp, seg, node * 2 + 1, (st + ed) / 2 + 1, ed, mode));		
	}
}

ll calc(vector<ll> &inp, vector<ll> &seg, int node, int st, int ed, int left, int right, bool mode) {
	if (left > ed || right < st) return (mode == true) ? INF : -INF;

	if (left <= st && ed <= right) return seg[node];

	return (mode == true) ?
		min(calc(inp, seg, node * 2, st, (st + ed) / 2, left, right, mode), calc(inp, seg, node * 2 + 1, (st + ed) / 2 + 1, ed, left, right, mode))
		: max(calc(inp, seg, node * 2, st, (st + ed) / 2, left, right, mode), calc(inp, seg, node * 2 + 1, (st + ed) / 2 + 1, ed, left, right, mode));
}

int main() {
	scanf("%lld %lld", &N, &M);
	inp.resize(N);
	for (int i = 0; i < N; i++) scanf("%lld", &inp[i]);
	int h = (int)ceil(log2(N));

	bg.resize(1 << (h + 1));
	sm.resize(1 << (h + 1));

	init(inp, sm, 1, 0, N - 1, true);
	init(inp, bg, 1, 0, N - 1, false);

	while (M--) {
		scanf("%d %d", &a, &b);
		printf("%lld %lld\n", calc(inp, sm, 1, 0, N - 1, a - 1, b - 1, true), calc(inp, bg, 1, 0, N - 1, a - 1, b - 1, false));
	}
}