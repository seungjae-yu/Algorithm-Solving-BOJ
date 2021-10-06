#include <iostream>
#include <string>
using namespace std;
int N, tc;
int main() {
	scanf("%d", &tc);
	char c;
	while (tc--) {
		scanf("%d", &N);
		cin >> c;
		string ans = "";
		ans += c;
		for (int i = 0; i < N - 1; i++) {
			cin >> c;
			if (ans[0] < c) ans += c;
			else ans = c + ans;
		}
		cout << ans << "\n";
	}
}