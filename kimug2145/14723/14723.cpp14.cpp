#include <iostream>
using namespace std;

int N, gp, tmp;

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		if (i*(i + 1) / 2 >= N) {
			gp = i; break;
		}
	}

	tmp = N - (gp)*(gp - 1) / 2;	
	printf("%d %d\n", gp - tmp + 1, tmp);
}