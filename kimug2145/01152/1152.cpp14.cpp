#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char inp[1000002];
int cnt = 1;
int main() {
	cin.getline(inp, 1000002);
	for (int i = 0; i < strlen(inp); i++)
		if (inp[i] == ' ') cnt++;
	if (inp[0] == ' ') cnt--;
	if (inp[strlen(inp) - 1] == ' ') cnt--;
	printf("%d\n", cnt);
}