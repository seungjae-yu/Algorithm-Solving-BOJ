#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int N, M, a, b;
bool chk[32003];
vector<int> v[32003];
stack<int> s;

void DFS(int n) {
	chk[n] = true;

	for (int i = 0; i < v[n].size(); i++)
		if (!chk[v[n][i]]) DFS(v[n][i]);

	s.push(n);
}

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
	}
	
	for (int i = 1; i <= N; i++)
		if (!chk[i]) DFS(i);
	
	while (!s.empty()) {
		printf("%d ", s.top());
		s.pop();
	}	
}