#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

typedef pair<int, int> pii;
#define INF 1987654321
int inp[10][10], cnt[6], ans = INF;

pii chk(int arr[10][10]) {
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (arr[i][j]) return { i,j };

	return { -INF,-INF };
}

bool isOk(int arr[10][10], pii p, int sz) {

	for (int i = p.first; i < p.first + sz; i++)
		for (int j = p.second; j < p.second + sz; j++)
			if (i > 9 || j > 9 || arr[i][j] == 0) return false;

	return true;
}

void func(int arr[10][10], int ssum, int cnt[6]) {
	if (ssum > 25 || ssum >= ans) return;

	pii p = chk(arr);
	if (p == make_pair(-INF, -INF)) { ans = min(ans, ssum); return; }

	for (int k = 5; k >= 1; k--) {
		if (cnt[k] <= 0) continue;
		if (isOk(arr, p, k)) {
			int tmp[10][10] = { 0, };

			memcpy(tmp, arr, sizeof(tmp));

			for (int i = p.first; i < p.first + k; i++)
				for (int j = p.second; j < p.second + k; j++)
					tmp[i][j] = 0;

			cnt[k]--;
			func(tmp, ssum + 1, cnt);
			cnt[k]++;
		}
	}
}

int main() {
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			scanf("%d", &inp[i][j]);

	fill(cnt, cnt + 6, 5);
	func(inp, 0, cnt);
	printf("%d\n", ans == INF ? -1 : ans);
}