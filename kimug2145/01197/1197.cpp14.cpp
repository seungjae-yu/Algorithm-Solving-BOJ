#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Edge {
	int start, end, cost;
};

bool cmp(Edge e1, Edge e2) {
	return e1.cost < e2.cost;
}

int p[10001];
int V, E, ans;
int xx, yy;

int Find(int x) {
	if (x == p[x]) return x;
	else return p[x] = Find(p[x]);
}

void Union(int x, int y) {
	x = Find(x);
	y = Find(y);
	p[x] = y;
}

int main() {
	scanf("%d %d", &V, &E);

	for (int i = 1; i <= V; i++) {
		p[i] = i;
	}

	vector <Edge> a(E);
	for (int i = 0; i < E; i++) {
		scanf("%d %d %d", &a[i].start, &a[i].end, &a[i].cost);
	}

	sort(a.begin(), a.end(), cmp);
	Edge temp;
	for (int i = 0; i < E; i++) {
		temp = a[i];
		xx = Find(temp.start);
		yy = Find(temp.end);

		if (xx != yy) {
			Union(temp.start, temp.end);
			ans += temp.cost;
		}
	}
	printf("%d\n", ans);
}