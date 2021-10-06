#include <iostream>

using namespace std;

int fibo[46] = { 0, };

int main() {
	
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;

	int n;
	scanf("%d", &n);
	
	for (int i = 3; i <= n + 1 ; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	printf("%d\n", fibo[n]);
}