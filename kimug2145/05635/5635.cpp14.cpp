#include <iostream>
#include <string>
#include <map>
using namespace std;

int tc, d, m, y;
string inp;
map<int, string>ma, mb;

int main() {

	scanf("%d", &tc);

	while (tc--) {
		cin >> inp >> d >> m >> y;
		ma.insert({ -((32 - d) + (13 - m) * 32 + (10000 - y) * 365),inp });
		mb.insert({ ((32 - d) + (13 - m) * 32 + (10000 - y) * 365),inp });
	}

	cout << (*mb.begin()).second << "\n" << (*ma.begin()).second << "\n";
}