#include <iostream>
#include <string>
using namespace std;
string inp;
int main() {	
	cin >> inp;	
	for (int i = 0; i < inp.length(); i++) {
		int tmp = inp[i] - 3;
		if (tmp >= 65) cout << (char)(inp[i] - 3);
		else cout << (char)(inp[i] + 23);
	}
}