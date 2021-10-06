#include <iostream>
#include <algorithm>
using namespace std;

int type, a, b;
int n, m;

int parent[1000001] , rnk[1000001];

int Find(int p) {

	if (parent[p] == p) return p;

	else
		return Find(parent[p]);
}

void uni(int p, int q)
{
	int u, v;

	u = Find(p);
	v = Find(q);

	if (u == v)  return ;
	if (rnk[u] > rnk[v])  parent[v] = u;
	else if (rnk[u] == rnk[v]) {
		parent[v] = u;
		rnk[u]++;
	}
	else parent[u] = v;
}



int main() {

	scanf("%d %d", &n, &m);

	for (int i = 0; i <= n; i++) {
		parent[i] = i;
		rnk[i] = 1;
	}

	for (int i = 1; i <= m; i++) {

		scanf("%d %d %d", &type, &a, &b);
		if (type == 0) {
			uni(a, b);
		}

		else if (type == 1) {

			if (Find(a) == Find(b)) {
				printf("YES\n");
			}
			else printf("NO\n");
		}
	}
}