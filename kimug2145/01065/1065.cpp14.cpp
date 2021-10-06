#include <iostream>
#include <string>
using namespace std;

int N, cnt;

bool isOK(int n) {

	if (n <= 99) return true;
	if (n == 1000) return false;

	string tmp = to_string(n);
	
	if (tmp[0] - '0' + tmp[2] - '0' == (tmp[1] - '0') * 2) return true;
	else return false;
}

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		if (isOK(i)) cnt++;
	
	printf("%d\n", cnt);
}