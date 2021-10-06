#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string inp;
int ssum;

int main() {
	cin >> inp;
	
	for (int i = 0; i < inp.length(); i++) {
		if (inp[i] >= 'A' && inp[i] <= 'F') ssum += (inp[i] - 'A' + 10)*pow(16,(inp.length()-i-1));
		else ssum += (inp[i] - '0')*pow(16, (inp.length() - i-1));
	}
	printf("%d\n", ssum);
}