#include <iostream>
#include <string>
using namespace std;

int n, m;
string inp, cmp="I";
int main() {
	scanf("%d %d", &n, &m);
	cin >> inp;

	for (int i = 0; i < n; i++)
		cmp += "OI";
	
	int idx = inp.find(cmp);
	if (idx > inp.length()) {
		cout << 0;
		exit(0);
	}
	int cnt = 0;
	for (int i = 0; i < inp.length(); i++) {
		if (idx < inp.length()) idx = inp.find(cmp, idx + 1), cnt++;
	}
	cout << cnt;
}