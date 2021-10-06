#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

char inp[10];
int len, cnt;

int main() {
	cin >> inp;
	len = strlen(inp);
	sort(inp, inp + len);	
	do {		
		bool chk = true;
		for (int i = 0; i < len-1; i++) {
			if (inp[i] == inp[i + 1]) { chk = false; break; }
		}
		if (chk) cnt++;
	} while (next_permutation(inp, inp + strlen(inp)));	
	printf("%d\n", cnt);
}