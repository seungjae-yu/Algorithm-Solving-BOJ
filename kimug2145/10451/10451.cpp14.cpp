#include <iostream>
#include <cstring>
using namespace std;

int tc, n, inp[1005], m[1005][1005], cnt;
bool chk[1005];
int start;

void DFS(int st,int val) {

	if (m[st][val] == true) {
		cnt++;
		return;
	}

	chk[st] = true;
	for (int i = 1; i <= n; i++) {		
		if (m[st][i] && !chk[i]) {
			DFS(i, val);
		}
	}
}

int main() {
	scanf("%d", &tc);
	while (tc--) {
		cnt = 0;
		memset(chk, 0, sizeof(chk)), memset(m, 0, sizeof(m));
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) scanf("%d", &inp[i]), m[i][inp[i]] = true;		
		for (int i = 1; i <= n; i++) if (!chk[i]) DFS(i, i);
		printf("%d\n", cnt);
	}
}