#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char inp[88];

int main() {
	cin.getline(inp, 88);
	
	for (int i = 0; i < strlen(inp); i++) {
		cout << inp[i];
		if (inp[i] == 'a' || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u') i += 2;
	}
}