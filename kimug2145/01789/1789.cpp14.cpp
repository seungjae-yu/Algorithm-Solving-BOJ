#include <iostream>
#include <cmath>
using namespace std;

unsigned long long inp, iter;

int main() {
			
	cin >> inp;

	iter = (unsigned long long)sqrt(inp * 2);

	while (iter*(iter+1)/2 > inp)
		iter--;

	cout << iter;
}