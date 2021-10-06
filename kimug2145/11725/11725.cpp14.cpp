#include <iostream>
#include <vector>
using namespace std;

vector<int> v[100005];
bool chk[100005];
int par[100005];
int N, a, b;

void DFS(int n) {

	chk[n] = true;

	for (int i = 0; i < v[n].size(); i++) {
		int nxt = v[n][i];
		if (!chk[nxt]) {
			par[nxt] = n;
			DFS(nxt);
		}
	}
}

int main() {

	scanf("%d", &N);
	for (int i = 1; i < N;i++){
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}

	DFS(1);

	for (int i = 2; i <= N; i++) printf("%d\n", par[i]);
}