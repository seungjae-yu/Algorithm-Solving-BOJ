#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

typedef struct {
	int len;
	string s;
}alp;

int n;

vector<string>v;

bool cmp(alp a, alp b) {
	return (a.len < b.len) || (a.len == b.len && a.s < b.s);
}

alp inp[20005];
string gg;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> gg;
		inp[i].s = gg;
		inp[i].len = gg.length();
	}
	sort(inp, inp + n, cmp);
	cout << inp[0].s << "\n";
	for (int i = 1; i < n; i++) {
		string tmp = inp[i-1].s;
		if (tmp == inp[i].s) continue;
		cout << inp[i].s << "\n";
	}	
}