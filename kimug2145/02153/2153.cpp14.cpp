#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;

#define N 1234
int arr[N];

int main() {

	for (int i = 2; i <= N; i++) arr[i] = i;

	for (int i = 2; i <= sqrt(N); i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= N; j += i) {
			arr[j] = 0;
		}
	}
	arr[1] = 1;
	string inp;

	cin >> inp;
	
	int sum = 0;

	for (int i = 0; i < inp.length(); i++) {
		if (inp[i] >= 'a' && inp[i] <= 'z') sum += (inp[i] - 'a' + 1);
		else sum += (inp[i] - 'A' + 27);
	}	
	if (arr[sum] == sum) {
		cout << "It is a prime word.\n";
	}
	else cout << "It is not a prime word.\n";
}