#include <iostream>
using namespace std;
int inp, N, X;

int main() {
	scanf("%d %d", &N, &X);
	for (int i = 0; i < N; i++) {
		scanf("%d", &inp);
		if (inp < X) printf("%d ", inp);
	}
}