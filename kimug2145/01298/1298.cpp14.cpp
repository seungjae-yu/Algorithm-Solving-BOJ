#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int N, M, a, b;
#define INF 1987654321
vector<int> v[111];
int match[5005];
bool chk[5005];

bool DFS(int n) {

	if (chk[n]) return false;

	chk[n] = true;

	for (int i = 0; i < v[n].size(); i++) {
		int nxt = v[n][i];

		if (!match[nxt] || DFS(match[nxt])) {
			match[nxt] = n;
			return true;
		}
	}
	return false;
}

int func() {
	int ret = 0;

	for (int i = 1; i <= N; i++) {
		memset(chk, 0, sizeof(chk));
		if (DFS(i)) ret++;
	}
	return ret;
}

int main() {
	scanf("%d %d", &N, &M);
	
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
	}
	cout << func() << "\n";
}