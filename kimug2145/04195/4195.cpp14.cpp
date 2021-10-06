#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int tc, F;
char a[22], b[22];
#define SZ 200002
int parent[SZ];
int rnk[SZ];

int fnd(int k) {
	if (k == parent[k]) return k;
	return parent[k] = fnd(parent[k]);
}

int uni(int p, int q) {
	int pp, qq;
	pp = fnd(p);
	qq = fnd(q);

	if (pp != qq) {
		parent[qq] = pp;
		rnk[pp] += rnk[qq];
		rnk[qq] = 1;
	}
	return rnk[pp];
}

int main() {
	scanf("%d", &tc);

	while (tc--) {
		unordered_map<string, int> m;
		scanf("%d", &F);
		int idx = 0;
		for (int i = 0; i < 2 * F; i++)
			parent[i] = i, rnk[i] = 1;

		while (F--) {
			scanf("%s %s", &a, &b);
			if (!m.count(a)) m[a] = idx++;
			if (!m.count(b)) m[b] = idx++;
			printf("%d\n", uni(m[a], m[b]));
		}
	}
}