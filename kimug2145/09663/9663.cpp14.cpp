#include <iostream>
#include <cmath>
using namespace std;

int n, m[20], cnt;

void bt(int now) {

	if (now == n - 1) cnt++;

	for (int i = 0; i < n; i++) {
		m[now + 1] = i;

		bool chk = true;

		for (int j = 0; j < now + 1; j++) {
			if (m[j] == m[now + 1] || now + 1 - j == abs(m[now + 1] - m[j])) {
				chk = false;
				break;
			}
		}
		if (chk) bt(now + 1);
	}
}

int main() {
	scanf("%d", &n);
	bt(-1);
	printf("%d\n", cnt);
}