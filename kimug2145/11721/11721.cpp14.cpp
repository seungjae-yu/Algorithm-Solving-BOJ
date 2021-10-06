#include <iostream>
#include <string>
using namespace std;
string inp;
int cnt = 0;
int main() {
	cin >> inp;
	for (int i = 0; i < inp.size(); i++) {
		cout << inp[i];
		cnt++;
		if (cnt % 10 == 0) printf("\n"), cnt = 0;
	}
}