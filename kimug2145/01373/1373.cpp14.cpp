#include <iostream>
#include <string>
using namespace std;
string inp;

int main() {
	cin >> inp;
	int sz = inp.size();

	if (sz % 3 == 0) {
		for (int i = 0; i < sz; i += 3)
			cout << inp[i] * 4 + inp[i + 1] * 2 + inp[i + 2] - '0' * 7;
	}

	if (sz % 3 == 1) {
		cout << inp[0] - '0';
		for (int i = 1; i < sz; i += 3)
			cout << inp[i] * 4 + inp[i + 1] * 2 + inp[i + 2] - '0' * 7;
	}

	if (sz % 3 == 2) {
		cout << inp[0] * 2 + inp[1] - '0' * 3;
		for (int i = 2; i < sz; i += 3)
			cout << inp[i] * 4 + inp[i + 1] * 2 + inp[i + 2] - '0' * 7;
	}
}