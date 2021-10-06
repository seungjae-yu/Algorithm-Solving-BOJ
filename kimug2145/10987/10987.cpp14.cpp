#include <iostream>
#include <string>
using namespace std;
string inp;
int cnt;
int main() {
	cin >> inp;
	for (int i = 0; i < inp.length(); i++) {
		char t = inp[i];
		if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')cnt++;
	}
	printf("%d\n", cnt);
}