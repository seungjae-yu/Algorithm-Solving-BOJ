#include <iostream>
#include <string>
using namespace std;

string inp;

string intToBinary(char a) {
	int r = a - '0';

	if (r == 0) return "000";
	if (r == 1) return "001";
	if (r == 2) return "010";
	if (r == 3) return "011";
	if (r == 4) return "100";
	if (r == 5) return "101";
	if (r == 6) return "110";
	if (r == 7) return "111";
}

int main() {
	cin >> inp;
	
	string ret = "";
	for (int i = 0; i < inp.length(); i++) {		
		ret = intToBinary(inp[i]);
		if (i == 0 && ret[0] == '0' && ret[1] == '0') cout<< ret[2];
		else if (i == 0 && ret[0] == '0') cout << ret[1] << ret[2];
		else cout << ret;
	}	
}