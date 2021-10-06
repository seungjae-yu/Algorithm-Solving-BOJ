#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int n;
char inp[33];

int main() {
	scanf("%d\n", &n);
	while (n--) {
		cin.getline(inp, 33);
		if (inp[0] >= 'a' && inp[0] <= 'z') inp[0] = char((inp[0] - 'a') + 'A');
		cout << inp << "\n";
	}
}