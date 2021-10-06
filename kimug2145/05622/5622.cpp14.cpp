#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string inp;
int ssum, s[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
int main() {
	cin >> inp;
	for (int i = 0; i < inp.length(); i++) {
		ssum += s[inp[i] - 'A'];
	}
	printf("%d\n", ssum);
}