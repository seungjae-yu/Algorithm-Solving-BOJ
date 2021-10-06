#include <iostream>
using namespace std;
int N;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= i; j++) cout << " ";
		int cmp = 2 * (N - i) - 1;
		while (cmp--) cout << "*";
		cout << "\n";
	}
}