#include <iostream>
#include <string>
#include <map>
typedef long long ll;
using namespace std;
typedef pair<ll, ll> pii;
map<string, pii> m;
int main() {
	string a, b, c;
	cin >> a >> b >> c;
	m.insert(make_pair("black", make_pair(0, 1)));
	m.insert(make_pair("brown", make_pair(1, 10)));
	m.insert(make_pair("red", make_pair(2, 100)));
	m.insert(make_pair("orange", make_pair(3, 1000)));
	m.insert(make_pair("yellow", make_pair(4, 10000)));
	m.insert(make_pair("green", make_pair(5, 100000)));
	m.insert(make_pair("blue", make_pair(6, 1000000)));
	m.insert(make_pair("violet", make_pair(7, 10000000)));
	m.insert(make_pair("grey", make_pair(8, 100000000)));
	m.insert(make_pair("white", make_pair(9, 1000000000)));
	cout << (m[a].first * 10 + m[b].first) * m[c].second;
}