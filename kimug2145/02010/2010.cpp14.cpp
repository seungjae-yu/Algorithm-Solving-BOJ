#include <iostream>
using namespace std;

int N, inp[1005], sum = 0;

int main() {

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &inp[i]);
		sum += inp[i] - 1;
	}
	printf("%d", sum + 1);
}