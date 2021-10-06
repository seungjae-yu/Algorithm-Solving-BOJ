#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string Duru, Dari1, Dari2;
int duru_sz, dari_sz;
int dp[105][2];

int main() {

	cin >> Duru >> Dari1 >> Dari2;
	duru_sz = Duru.size();
	dari_sz = Dari1.size();

	dp[0][0] = dp[0][1] = 1;

	for (int i = 0; i < dari_sz; i++) {
		for (int j = duru_sz; j >= 0; j--) {
			if (Dari1[i] == Duru[j]) dp[j + 1][1] += dp[j][0];
			if (Dari2[i] == Duru[j]) dp[j + 1][0] += dp[j][1];
		}
	}
	printf("%d\n", dp[duru_sz][0] + dp[duru_sz][1]);
}