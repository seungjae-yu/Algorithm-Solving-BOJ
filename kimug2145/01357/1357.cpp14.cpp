#include <string>
#include <iostream>
using namespace std;

string a, b;
int main() {
	cin >> a >> b;
	
	string ta, tb, tr;
	ta = tb = "";

	for (int i = a.length() - 1; i >= 0; i--) ta += a[i];
	for (int i = b.length() - 1; i >= 0; i--) tb += b[i];

	int res = stoi(ta) + stoi(tb);
	tr = to_string(res);
	string prt = "";
	for (int i = tr.length() - 1; i >= 0; i--) prt += tr[i];
	cout << stoi(prt);
}