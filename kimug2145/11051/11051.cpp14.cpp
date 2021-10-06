#include <iostream>
#include <algorithm>

using namespace std;

int N, K, tmp;

int b[1005][1005];

void func() {

	for (int i = 0; i <= N; i++) {
		b[i][0] = b[i][i] = 1;

		for (int j = 1; j < i; j++) {
			b[i][j] = (b[i - 1][j - 1] % 10007) + (b[i - 1][j] % 10007) % 10007;
		}
	}
}

int main() {

	scanf("%d %d", &N, &K);
	func();

	cout << b[N][K] % 10007;

}