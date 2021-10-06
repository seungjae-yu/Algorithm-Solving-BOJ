#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N, S, cnt, cur;
int inp[22];

void bt(int pos, int val) {

	if (pos >= N) {
		if (val == S) cnt++;
		return;
	}

	bt(pos + 1, val);
	bt(pos + 1, val + inp[pos]);
}

int main() {
	scanf("%d %d", &N, &S);
	for (int i = 0; i < N; i++) scanf("%d", &inp[i]);
	
	if (S == 0) cnt--;
	bt(0, 0);
	printf("%d\n", cnt);
}