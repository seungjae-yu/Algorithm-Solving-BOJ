#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char inp[55];
int chk[26], cc;
string res = "";
char ad = ' ';

int main() {
	cin >> inp;

	for (int i = 0; i < strlen(inp); i++) chk[inp[i] - 'A']++;

	for (int i = 0; i < 26; i++) {
		if (chk[i] % 2 == 1) cc++;
		if (cc >= 2) {
			printf("I'm Sorry Hansoo\n");
			exit(0);
		}
	}

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < chk[i]; chk[i] -= 2) {
			if (chk[i] == 1) {
				ad = (i + 'A');
				continue;
			}
			res += char('A' + i);
		}
	}

	if (ad != ' ') res += ad;

	int iter = ad == ' ' ? res.size() - 1 : res.size() - 2;

	string ans = "";

	for (int i = iter; i >= 0; i--) ans += res[i];
	
	cout << res + ans << "\n";

}