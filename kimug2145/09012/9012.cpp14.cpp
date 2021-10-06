#include <iostream>
#include <string>
using namespace std;
int N, chk;
string s;
bool pnt;

int main() {

	scanf("%d", &N);

	while (N--) {
		cin >> s;
		int sz = s.size();

		chk = 0;
		pnt = false;

		for (int i = 0; i < sz; i++) {

			if (s[i] == '(')
				chk++;
			else if (s[i] == ')')
				chk--;

			if (chk < 0) {
				printf("NO\n");
				pnt = true;
				break;
			}
		}			

		if (!pnt) {
			if (chk) printf("NO\n");
			else printf("YES\n");
		}
	}
}