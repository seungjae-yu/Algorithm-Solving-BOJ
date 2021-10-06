#include <iostream>
#include <map>
#include <string>
using namespace std;

int tc, n, ip;
string inp;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);
		map<int, string>m;

		for (int i = 0; i < n; i++) {
			cin >> inp >> ip;
			m.insert({ -ip,inp });
		}
		cout << (*m.begin()).second << "\n";
	}
}