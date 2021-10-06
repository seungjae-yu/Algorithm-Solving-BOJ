#include <iostream>
using namespace std;

int arr[5], inp, win, sc;

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &inp);
			arr[i] += inp;
		}
	}


	for (int i = 0; i < 5; i++)
		if (sc < arr[i]) win = i, sc = arr[i];

	printf("%d %d\n", win + 1, sc);

}