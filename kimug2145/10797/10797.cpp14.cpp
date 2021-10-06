#include <iostream>
using namespace std;

int n, inp, cnt;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &inp);
		if (inp == n) cnt++;
	}
	printf("%d", cnt);
}