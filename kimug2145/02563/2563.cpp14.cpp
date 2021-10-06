#include <iostream>
using namespace std;

int n, a, b, cnt;
int arr[102][102];

int main() {
	scanf("%d", &n);

	while (n--) {
		scanf("%d %d", &a, &b);

		for (int i = b; i <= b + 9; i++) {
			for (int j = a; j <= a + 9; j++) {
				arr[j][i] = 1;
			}
		}
	}

	for (int i = 0; i < 102; i++) {
		for (int j = 0; j < 102; j++)
			if (arr[i][j]) cnt++;
	}
	printf("%d\n", cnt);
}