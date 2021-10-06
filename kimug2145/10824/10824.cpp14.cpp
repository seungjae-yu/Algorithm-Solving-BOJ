#include <iostream>
#include <string>
using namespace std;
string a, b, c, d, ab, cd;

int main() {
	cin >> a >> b >> c >> d;
	ab = a + b, cd = c + d;
	cout << stoll(ab) + stoll(cd) << "\n";
}