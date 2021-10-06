#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

ll N, a, b, M;
vector<ll> inp;
vector<ll> seg;
#define INF 1987654321

ll init(int node, int st, int  ed) {
	if (st == ed) return seg[node] = inp[st];
	else return seg[node] = min(init(node * 2, st, (st + ed) / 2) , init(node * 2 + 1, (st + ed) / 2 + 1, ed));
}

ll mmin(int node, int st, int ed, int left, int right) {
	if (left > ed || right < st) return INF;
	if (left <= st && ed <= right) return seg[node];
	return min(mmin(node * 2, st, (st + ed) / 2, left, right), mmin(node * 2 + 1, (st + ed) / 2 + 1, ed, left, right));
}

int main() {
	scanf("%lld %lld", &N, &M);
	inp.resize(N);
	for (int i = 0; i < N; i++) scanf("%lld", &inp[i]);
	int h = (int)ceil(log2(N));
	seg.resize(1 << (h + 1));
	init(1, 0, N-1);
	while (M--) {
		scanf("%d %d", &a, &b);
		printf("%lld\n", mmin(1, 0, N-1, a-1, b-1));
	}
}