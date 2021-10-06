#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int tc;
string s1, s2;

int main() {
	scanf("%d", &tc);

	while (tc--) {
		cin >> s1 >> s2;
		int cnt1 = 0, cnt2 = 0;
		for (int i = 0; i < s1.size(); i++) {
			if (s1[i] == '0' && s2[i] == '1') cnt1++;
			else if (s1[i] == '1' && s2[i] == '0') cnt2++;			
		}
		cout << max(cnt1, cnt2) << "\n";
	}
}