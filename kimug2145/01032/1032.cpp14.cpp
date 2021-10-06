#include <iostream>
#include <string>
using namespace std;

int tc;
string inp[55];

int main() {
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) cin >> inp[i];
	string tmp = inp[0];
	string ans = "";
	
	for (int i = 0; i < tmp.length(); i++) {
		bool chk = false;
		for (int j = 0; j < tc; j++) {
			if (tmp[i] != inp[j][i]) {
				ans += "?";
				chk = true;
				break;
			}
		}
		if (chk == false) ans += tmp[i];
	}

	cout << ans;
}