#include <iostream>
#include <cmath>

using namespace std;

int arr[10001];
int M, N;
int cnt = 0;
int first;
int main() {
	bool min = false;

	scanf("%d %d", &M, &N);

	for (int i = 1; i < 10001; i++) {
		arr[i] = i;
	}

	for (int i = 2; i < sqrt(10000); i++) {

		if (arr[i] == 0)
			continue;

		for (int j = 2; j < 10001; j++) {
			if (arr[j] != i && arr[j] % i == 0) {
				arr[j] = 0;
			}
		}
	}

	arr[0] = 0;
	arr[1] = 0;	
	
	for (int i = M; i < N + 1; i++) {
		if (arr[i] != 0) {
			if (min == false) {
				first = arr[i];
				min = true;
				cnt += arr[i];
			}
			cnt += arr[i];
		}
	}

	if (cnt != 0)
		printf("%d\n%d\n", cnt - first, first);
	else
		printf("%d\n", -1);

}