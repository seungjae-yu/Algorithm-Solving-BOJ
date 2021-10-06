#include <iostream>
using namespace std;

int tc, inp;
int m[4] = { 25,10,5,1 };

int main() {
	scanf("%d", &tc);

	while (tc--) {
		int res[4] = { 0, };
		scanf("%d", &inp);

		for (int i = 0; i < 4; i++) {
			res[i] = inp / m[i];
			inp -= res[i] * m[i];
		}
		for (int i = 0; i < 4; i++)printf("%d ", res[i]);
		printf("\n");
	}
}