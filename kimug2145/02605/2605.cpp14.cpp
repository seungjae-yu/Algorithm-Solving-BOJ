#include <iostream>
using namespace std;

int arr[105], n, inp;

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &inp);
		if (inp == 0) arr[i] = i;
		else {
			int j = i;
			while (inp--) {
				arr[j] = arr[j - 1];
				j--;
			}
			arr[j] = i;
		}
	}

	for (int i = 1; i <= n; i++) printf("%d ", arr[i]);
} 