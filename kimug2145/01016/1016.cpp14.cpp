#include <iostream>
using namespace std;

typedef unsigned long long ull;

ull a, b, cnt;
ull chk[1000005];

int main() {

	cin >> a >> b;

	for (ull i = 2; i*i <= b; i++) {
		ull tmp = a / (i*i);
		if (a % (i*i) != 0)	tmp++;

		while (tmp*(i*i) <= b) {
			chk[tmp*(i*i) - a] = 1;
			tmp++;
		}

	}

	for (int i = 0; i <= b - a; i++)
		if (chk[i] == 0) cnt++;

	cout << cnt;
}