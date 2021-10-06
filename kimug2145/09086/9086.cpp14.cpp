#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int tc;
string inp;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		cin >> inp;
		cout << inp[0] << inp[inp.size() - 1] << "\n";
	}
}