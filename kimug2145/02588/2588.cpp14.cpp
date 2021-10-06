#include <iostream>
#include <algorithm>
#include <string>
using namespace std;	
string a, b;
int c, d, e, f;
int main() {
	cin >> a >> b;	
	c = stoi(a) * (b[2] - '0');
	d = stoi(a) * (b[1] - '0');
	e = stoi(a) * (b[0] - '0');
	f = stoi(a) * stoi(b);
	printf("%d\n%d\n%d\n%d\n", c, d, e, f);
}