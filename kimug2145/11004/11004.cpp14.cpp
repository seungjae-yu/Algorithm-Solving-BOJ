#include <iostream>
#include <algorithm>
using namespace std;

int n, k, inp[5000001];

int main() {

	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &inp[i]);
	}
	sort(inp, inp + n);

	cout << inp[k - 1] << "\n";
}