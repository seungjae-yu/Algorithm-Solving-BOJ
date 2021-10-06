#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int N, inp[52][3], ate[52], ans;
bool chk[52];
vector<int> v[52];

bool dfs(int pos) {
	chk[pos] = true;

	for (int i = 0; i < v[pos].size(); i++) {
		int nxt = v[pos][i];
		if (ate[nxt] == -1 || !chk[ate[nxt]] && dfs(ate[nxt])) {
			ate[nxt] = pos;
			return true;
		}
	}
	return false;
}

int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &inp[i][j]);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (inp[i][0] == inp[j][0] && inp[i][1] == inp[j][1] && inp[i][2] == inp[j][2] && i < j) continue;

			if (inp[i][0] <= inp[j][0] && inp[i][1] <= inp[j][1] && inp[i][2] <= inp[j][2] && i != j) {
				v[j].push_back(i);
			}
		}
	}

	memset(ate, -1, sizeof(ate));

	for (int i = 0; i < N; i++) {
		memset(chk, 0, sizeof(chk));
		dfs(i);
		memset(chk, 0, sizeof(chk));
		dfs(i);
	}

	for (int i = 0; i < N; i++) if (ate[i] == -1) ans++;
	printf("%d\n", ans);

}