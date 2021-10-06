#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string inp;
int arr[26];
int main() {	
	cin >> inp;	
	for (int i = 0; i < inp.size(); i++) if (inp[i] - 'a' >= 0) inp[i] -= 32;
	for (int i = 0; i < inp.size(); i++) arr[inp[i] - 'A']++;
	int mmax = *max_element(arr, arr + 26);
	int cnt = 0;
	for (int i = 0; i < 26; i++) if (arr[i] == mmax) cnt++;
	if (cnt != 1) printf("?");
	else cout << (char)(max_element(arr, arr + 26) - arr + 65);
}