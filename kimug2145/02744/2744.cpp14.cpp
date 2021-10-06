#include <iostream>
#include <string>
using namespace std;

string inp;

int main() {
	cin >> inp;
	for (int i = 0; i < inp.length(); i++) {
		if (inp[i] >= 'A' && inp[i] <= 'Z') cout << char((inp[i] - 'A') + 'a');
		if (inp[i] >= 'a' && inp[i] <= 'z') cout << (char)((inp[i] - 'a') + 'A');
	}
}