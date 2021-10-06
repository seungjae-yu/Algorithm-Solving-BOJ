#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string X;

int num(char a) {
	
	int ret;

	if (a == 'a') return 10;
	else if (a == 'b')return 11;
	else if (a == 'c')return 12;
	else if (a == 'd')return 13;
	else if (a == 'e')return 14;
	else if (a == 'f')return 15;

	else {
		ret = a - '0';
		return ret;
	}
}


int main() {

	cin >> X;

	if (X.size() >= 2) {
		
		if (X[0] == '0' && X[1] == 'x') {
			//16
			
			int ans = 0;
			int j = X.size() - 3;
			for (int i = 2; i < X.size(); i++) {
				ans += pow(16, j) * num(X[i]);
				j--;
			}
			cout << ans << "\n";
		}

		else if (X[0] == '0') {
			//8
			int ans = 0;
			int j = X.size() - 2;
			for (int i = 1; i < X.size(); i++) {
				int a = X[i] - '0';
				ans += pow(8, j) * a;
				j--;
			}
			cout << ans << "\n";
		}

		else {
			cout << X << "\n";
		}
	}

	else {
		cout << X << "\n";
	}
	
}