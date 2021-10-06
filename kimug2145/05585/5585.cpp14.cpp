#include <iostream>
using namespace std;

int m[6] = { 500,100,50,10,5,1 };
int inp, ans;

int main() {
	scanf("%d", &inp);
	inp = 1000 - inp;
	for (int i = 0; inp > 0; i++) {
		if (inp == 0) break;
		if (inp >= m[i]) {
			ans++;
			inp -= m[i];
			i = 0;
		}
	}
	printf("%d\n", ans);
}