#include <iostream>
#include <string>
#include <map>
using namespace std;

int tc, p, ip;
string inp;

int main() {

	scanf("%d", &tc);

	while (tc--) {
		scanf("%d", &p);
		map<int, string> m;
		for (int i = 0; i < p; i++) {
			cin >> ip >> inp;
			m.insert({ -ip,inp });
		}
		cout << (*m.begin()).second << "\n";
	}
}