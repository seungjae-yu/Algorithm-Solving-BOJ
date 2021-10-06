#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

#define N 1000002
int arr[N];

int main() {

	for (int i = 2; i <= N; i++) arr[i] = i;

	for (int i = 2; i <= sqrt(N); i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= N; j += i) {
			arr[j] = 0;
		}
	}

	int inp;

	while (true) {
		scanf("%d", &inp);
		if (inp == 0) break;

		for (int i = inp; i >= 2; i--) {
			if (arr[i] != 0 && arr[inp - i] != 0 && inp-i !=1) {
				printf("%d = %d + %d\n", inp, inp-i, i);
				break;
			}
		}
	}
}