#include <iostream>
#include <string>
#include <cstring>
#include <set>
using namespace std;

string inp;
set<string> s;

int main() {
	cin >> inp;
	int l = inp.length();
	for (int i = 0; i < l; i++) s.insert(inp.substr(i, l));
	for (auto i : s) cout << i << "\n";
}