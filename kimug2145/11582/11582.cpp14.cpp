#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, k, a;
vector<int> inp;

int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		inp.push_back(a);
	}
	scanf("%d", &k);
	int sz = N / k;

	for (vector<int>::iterator it = inp.begin(); it != inp.end(); it += sz) {
		sort(it, it + sz);
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", inp[i]);
	}
}