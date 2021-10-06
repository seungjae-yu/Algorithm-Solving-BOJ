#include <iostream>
#include <string>
using namespace std;
string a, b;

int main() {
	cin >> a >> b;	
	if (a.length() >= b.length()) printf("go");
	else printf("no");
}