#include <iostream>
using namespace std;
int n;

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n*2; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) cout << "*";
				else cout << " ";
			}

			else if (i % 2 == 1) {
				if (j % 2 == 1) cout << "*";
				else cout << " ";
			}

		}
		printf("\n");
	}
}