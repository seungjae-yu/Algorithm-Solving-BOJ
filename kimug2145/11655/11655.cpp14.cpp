#include <iostream>
#include <string>
using namespace std;

string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string b = "abcdefghijklmnopqrstuvwxyz";
string inp;
int main() {
	getline(cin, inp);

	for (int i = 0; i < inp.length(); i++) {
		if (inp[i] >= 'A' && inp[i] <= 'Z') cout << a[(inp[i] - 'A' + 13) % 26];
		else if (inp[i] >= 'a' && inp[i] <= 'z') cout << b[(inp[i] - 'a' + 13) % 26];
		else cout << inp[i];
	}
	cout << "\n";
}