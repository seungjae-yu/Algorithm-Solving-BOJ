#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string a, b;

int ac[26], bc[26];
int cnt = 0;

int main() {

	cin >> a >> b;

	int c = a[0];

	for (int i = 0; i < a.size(); i++) {
		ac[a[i]-97] ++;
	}

	for (int i = 0; i < b.size(); i++) {
		bc[b[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		cnt += abs(ac[i] - bc[i]);
	}
	
	cout << cnt << "\n";

	return 0;
}