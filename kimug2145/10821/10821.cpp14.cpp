#include <iostream>
#include <string>
using namespace std;

string inp;
int cnt;
int main() {
	cin >> inp;
	for (int i = 0; i < inp.length(); i++) if (inp[i] == ',')cnt++;
	printf("%d\n", cnt + 1);
}