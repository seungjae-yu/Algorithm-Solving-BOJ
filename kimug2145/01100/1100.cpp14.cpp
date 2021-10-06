#include <iostream>
#include <string>
using namespace std;
string inp;
int cnt;
int main() {	
	for (int i = 0; i < 8; i++) {
		cin >> inp;
		for (int j = 0; j < 8; j++)
			if (j % 2 == i % 2 && inp[j] == 'F') cnt++;
	}	
	printf("%d\n", cnt);
}