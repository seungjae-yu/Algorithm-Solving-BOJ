#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int tc, cnt, chk[30];
string inp;
int main() {
	scanf("%d", &tc);	
	while (tc--) {
		memset(chk, 0, sizeof(chk));
		cin >> inp;
		bool cc = false;

		for (int i = 0; i < inp.length(); i++) {
			if (chk[inp[i] - 'a'] == 0) chk[inp[i] - 'a'] = i + 1;
			else {
				if (chk[inp[i] - 'a'] == i) chk[inp[i] - 'a'] = i + 1;
				else {
					cc = true;
					break;
				}
			}			
		}
		if (cc == false) cnt++;
	}
	printf("%d\n", cnt);
}