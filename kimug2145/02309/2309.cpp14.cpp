#include <iostream>
#include <algorithm>
using namespace std;
int ar[9];
int main() {
	for (int i = 0; i < 9; i++) scanf("%d", &ar[i]);
	sort(ar, ar + 9);
	do {
		int sum = 0;
		for (int i = 0; i < 7; i++)
			sum += ar[i];

		if (sum == 100) {
			sort(ar, ar + 7);
			for (int i = 0; i < 7; i++) printf("%d\n", ar[i]);
			break;
		}
	} while (next_permutation(ar, ar + 9));
}