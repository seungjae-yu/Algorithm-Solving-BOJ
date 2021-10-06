#include <iostream>
#include <string>
using namespace std;
string N;

int ret(string s, int n , bool flag) {

	string tmp = "";
	int i;

	if (flag) {
		for (i = 0; i <= n; i++) {
			tmp += s[i];
		}
	}

	else {
		for (i = n; i < s.size(); i++) {
			tmp += s[i];
		}
	}

	int r = 1;

	for (int i = 0; i < tmp.size(); i++) {
		r *= (tmp[i] - 48);
	}
	return r;
}

int main() {
	cin >> N;	
	bool ans = false;
	for (int i = 0; i < N.size()-1; i++) {		
		if (ret(N, i, true) == ret(N, i + 1, false)) {
			cout << "YES"; exit(0);
		}			
	}
	cout << "NO";
}