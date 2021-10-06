#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int B;
string N;

int main() {

	cin >> N;
	scanf("%d", &B);

	int sz = N.size();
	int ans = 0;
	for (int i = 0; i < sz; i++) {
		int tmp = N[i];

		if (tmp >= 65 && tmp <= 90) {
			tmp -= 55;
		}
		else tmp -= 48;

		ans += tmp * pow(B, sz - i-1);
	}
	cout << ans;
}