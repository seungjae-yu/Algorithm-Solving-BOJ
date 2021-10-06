#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string inp;

int main() {	
	cin >> inp;

	int* arr = new int[inp.length()];
	int res[722],idx = 0;
	for (int i = 0; i < inp.length(); i++) arr[i] = inp[i]-'0';

	sort(arr, arr + inp.length());

	do {
		string tmp = "";
		for (int i = 0; i < inp.length(); i++) tmp += to_string(arr[i]);
		res[idx++] = stoi(tmp);
	} while (next_permutation(arr, arr + inp.length()));
	
	int tm = stoi(inp);

	for (int i = 0; i < idx; i++) {
		if (res[i] > tm) {
			printf("%d\n", res[i]);
			exit(0);
		}
	}
	printf("0\n");
}