#include <iostream>
using namespace std;

int n,inp;
bool chk[2000004];

int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &inp);
		chk[inp+1000000] = true;
	}

	for (int i = 2000000; i >= 0; i--)
		if (chk[i]) printf("%d\n", i - 1000000);
}