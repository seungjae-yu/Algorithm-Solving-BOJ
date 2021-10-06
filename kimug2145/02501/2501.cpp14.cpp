#include <iostream>
using namespace std;
int N, K, cnt;
int main() {
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) cnt++;
		if (cnt == K) printf("%d", i), exit(0);
	}
	printf("0");
}