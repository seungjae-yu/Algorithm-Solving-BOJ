#include <iostream>
using namespace std;

long long fibo[99];

int main() {
	int n;
	fibo[0] = 0;
	fibo[1] = 1;
	scanf("%d", &n);
	for (int i = 2; i <= 90; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	cout << fibo[n] << "\n";
}