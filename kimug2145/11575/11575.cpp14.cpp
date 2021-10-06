#include <iostream>
#include <string>
using namespace std;

int tc, a, b;
string s;
string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
using namespace std;

int main() {

	scanf("%d", &tc);

	while (tc--) {

		scanf("%d %d", &a, &b);
		cin >> s;
		
		for (int i = 0; i < s.size(); i++) {
			cout << A[(abs('A' - s[i]) * a + b) % 26];
		}
		cout << "\n";
	}


}
