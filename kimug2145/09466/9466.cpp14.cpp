#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int tc, n;
int inp[100005], chk[100005];

void DFS(int n, stack<int> &s) {
		
	if (n == inp[n]) { chk[n] = -1; return; }
	else if (chk[n] == 0) { s.push(n);}
	else if (chk[n] == -1) return;
	else if(chk[n] != -1){
		while (true) {
			if (s.empty()) break;
			int now = s.top();
			s.pop();
			if (now == n) break;			
			
		}
		return;
	}
	chk[n] = 1;
	DFS(inp[n],s);
	chk[n] = -1;
}

int main() {
	scanf("%d", &tc);

	while (tc--) {
		stack<int> st;
		int cnt = 0;
		memset(chk, 0, sizeof(chk));
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) scanf("%d", &inp[i]);
		
		for (int i = 1; i <= n; i++) {
			DFS(i,st);
		}
		printf("%d\n", st.size());
	}
}