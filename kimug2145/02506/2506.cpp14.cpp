#include <iostream>
int N, ar[101], sum, cnt = 1;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &ar[i]);
	for (int i = 0; i < N; i++) {
		if (ar[i] == 0) cnt = 1;
		else sum += cnt++;
	}
	std::cout << sum;
}