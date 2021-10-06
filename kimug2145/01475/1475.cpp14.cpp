#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string N;
int chk;
int cnt;
int ck[10];

int main() {
	
	cin >> N;
	
	for (string::iterator it = N.begin(); it != N.end() ; it++) {
		ck[*it - '0']++;
	}

	(ck[6] + ck[9]) % 2 == 0 ? ck[6] = (ck[6] + ck[9]) / 2 : ck[6] = (ck[6] + ck[9]) / 2 + 1;

	cnt = *max_element(ck, ck + 9);

	cout << cnt << "\n";

}