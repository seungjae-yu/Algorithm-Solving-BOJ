#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;
int V, a, b, c;
vector<pair <ll, ll> >v[100002];
bool chk[100002];
int ans,ed;

void DFS(int n, int s) {
	
	chk[n] = true;
	
	if (s > ans) {
		ans = s;
		ed = n;
	}

	for (int i = 0; i < v[n].size(); i++) {
		if (chk[v[n][i].first] == false) {
			DFS(v[n][i].first, s + v[n][i].second);
		}
	}
}

int main() {

	scanf("%d", &V);

	for (int i = 0; i < V; i++) {

		scanf("%d", &a);

		while (true) {
			scanf("%d", &b);
			if (b == -1) break;
			scanf("%d", &c);
			v[a].push_back(make_pair(b, c));
		}
	}

	DFS(1, 0);
	ans = 0;
	memset(chk, 0, sizeof(chk));
	DFS(ed, 0);
	printf("%d", ans);

}