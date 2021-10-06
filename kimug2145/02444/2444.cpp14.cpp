#include <iostream>
using namespace std;
int N;
int main() {
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {		
		for (int j = 1; j <= N - i; j++) cout << " ";
		int iter = i * 2 - 1;
		while (iter--) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i < N; i++) {
		for (int j = 1; j <= i; j++) cout << " ";
		int cmp = 2 * (N - i) - 1;
		while (cmp--) cout << "*";
		cout << "\n";
	}

}