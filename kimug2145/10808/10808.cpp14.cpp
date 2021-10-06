#include <iostream>
#include <string>
#include <map>
using namespace std;
string inp;
map<char, int>m;
int main() {
	cin >> inp;
	for (int i = 0; i < inp.length(); i++) m[inp[i]]++;	
	for (int i = 0; i < 26; i++) printf("%d ", m['a' + i]);
}