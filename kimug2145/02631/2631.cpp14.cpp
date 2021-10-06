#include <iostream>
#include <algorithm>
using namespace std;

int N, inp[202], lis[202];

int main() {

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) scanf("%d", &inp[i]);

	for (int i = 1; i <= N; i++) {
		lis[i] = 1;
		for (int j = 1; j < i; j++) {
			if (inp[j] < inp[i] && lis[j] + 1 > lis[i]) {
				lis[i] = 1 + lis[j];
			}
		}
	}
	cout << N - *max_element(lis + 1, lis + 1 + N);
}