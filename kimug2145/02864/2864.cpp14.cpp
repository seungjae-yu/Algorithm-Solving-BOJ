#include <iostream>
#include <string>
using namespace std;

int main() {

	string a, b;
	cin >> a >> b;

	int c, d, mmax, mmin;

	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '5') a[i] = '6';
	}

	for (int i = 0; i < a.size(); i++) {
		if (b[i] == '5') b[i] = '6';
	}

	mmax = stoi(a) + stoi(b);

	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '6') a[i] = '5';
	}

	for (int i = 0; i < a.size(); i++) {
		if (b[i] == '6') b[i] = '5';
	}

	mmin = stoi(a) + stoi(b);

	cout << mmin << " " << mmax;
}