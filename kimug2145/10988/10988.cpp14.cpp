#include <iostream>
#include <string>
using namespace std;

string inp;

int main() {
	cin >> inp;

	for (int i = 0; i < inp.length(); i++) {
		if (inp[i] != inp[inp.length() - i - 1]) {
			cout << 0;
			exit(0);
		}
	}
	cout << 1;
}