#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

string s;
int ans[26];

int main() {	
	cin >> s;
	memset(ans, -1, sizeof(ans));
	for (int i = 0; i < s.length(); i++) {
		int tmp = (int)(s[i] - 97);
		if (ans[tmp] == -1) ans[tmp] = i;
	}	
	for (int i = 0; i < 26; i++) printf("%d ", ans[i]);
}