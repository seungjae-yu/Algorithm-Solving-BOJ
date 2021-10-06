#include <iostream>
#include <string>
using namespace std;

int v, chk, c;
string inp;

int main() {
	scanf("%d", &v);
	cin >> inp;
	
	for (int i = 0; i < v; i++) {
		if (inp[i] == 'A') chk++;
		else c++;
	}

	if (chk == c) printf("Tie\n");
	else if (chk > c) printf("A\n");
	else printf("B\n");
}