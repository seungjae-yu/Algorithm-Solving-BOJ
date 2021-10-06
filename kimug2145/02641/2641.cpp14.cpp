#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int n, tc, inp;
string s1 = "", s2 = "", s3 = "", s4 = "";
map<string, int> m;
vector<string> v;

string rev(string str) {
	string ret = "";
	for (int i = str.length() - 1; i >= 0; i--) ret += str[i];
	return ret;
}

int main() {
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &inp);
		s1 += to_string(inp);
		s2 += to_string((inp + 2) % 4 == 0 ? 4 : (inp + 2) % 4);
	}
	
	m[s1]++, m[s2]++;
	m[rev(s1)]++, m[rev(s2)]++;

	for (int i = 0; i < n; i++) {
		s3 = s4 = "";
		for (int j = 0; j < n; j++) {
			s3 += s1[(j + i) % n];
			s4 += s2[(j + i) % n];
		}
		m[s3]++, m[s4]++;
		m[rev(s3)]++, m[rev(s4)]++;
	}

	scanf("%d", &tc);

	while (tc--) {
		string tmp = "";
		for (int i = 0; i < n; i++) scanf("%d", &inp), tmp += to_string(inp);		
		if (m[tmp]) v.push_back(tmp);
	}

	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < n; j++)
			cout << v[i][j] << " ";
		printf("\n");
	}
}