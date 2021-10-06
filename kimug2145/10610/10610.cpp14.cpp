#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string inp;
int res[111111];
bool chk = false;

bool cmp(const int a, const int b) {
	return a > b;
}

int main() {

	cin >> inp;

	int len = inp.length();
	int ssum = 0;
	for (int i = 0; i < len; i++) {
		int now = inp[i] - '0';
		if (now == 0) chk = true;
		ssum += now;
		res[i] = now;
	}

	if (!chk || (ssum % 3) != 0) {
		printf("-1");
		exit(0);
	}
	else {
		sort(res, res + len, cmp);
		for (int i = 0; i < len; i++) printf("%d", res[i]);
	}
}