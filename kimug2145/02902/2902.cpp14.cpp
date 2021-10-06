#include <iostream>
#include <string>
using namespace std;

string inp, ans = "";

int main() {
	cin >> inp;
	ans += inp[0];
	for (int i = 0; i < inp.length(); i++) if (inp[i] == '-') ans += inp[i + 1];	
	cout << ans;
}