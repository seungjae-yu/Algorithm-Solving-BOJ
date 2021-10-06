#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int K, L;
string inp;
map<string, int>m;
typedef pair<int, string> is;
vector<is> v;

bool cmp(is a, is b) {
	return a.first < b.first;
}

int main() {

	scanf("%d %d", &K, &L);

	for (int i = 0; i < L; i++) {
		cin >> inp;
		m[inp] = i;
	}

	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
		v.push_back(make_pair(it->second, it->first));

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < K && i < v.size(); i++)
		cout << v[i].second << "\n";
}