#include <iostream>
#include <algorithm>
using namespace std;

int k;
int inp[15],arr[15];

void bt(int pos, int cnt, int arr[15]) {

	if (cnt == 6) {
		for (int i = 0; i < cnt; i++) printf("%d ", arr[i]);
		printf("\n");
		return;
	}

	for (int i = pos; i < k; i++) {
		arr[cnt] = inp[i];
		bt(i + 1, cnt + 1, arr);
	}
}

int main() {
	while (true) {
		scanf("%d", &k);
		if (k == 0) break;
		for (int i = 0; i < k; i++) scanf("%d", &inp[i]);
		sort(inp, inp + k);
		bt(0, 0, arr);
		printf("\n");
	}
}