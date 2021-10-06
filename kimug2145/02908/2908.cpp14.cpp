#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string a, b, c = "", d = "";
int main() {
	cin >> a >> b;
	for (int i = a.length() - 1; i >= 0; i--) c += a[i];
	for (int i = b.length() - 1; i >= 0; i--) d += b[i];
	printf("%d\n", max(stoi(c), stoi(d)));
}