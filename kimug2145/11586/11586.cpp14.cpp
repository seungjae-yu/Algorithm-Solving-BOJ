#include <iostream>
using namespace std;

int N;
int K;

char input[101][101];

int main() {

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input[i][j];
		}
	}

	scanf("%d", &K);

	if (K == 1) {

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				printf("%c", input[i][j]);
			printf("\n");
		}

	}

	else if (K == 3) {

		for (int i = N - 1; i >= 0; i--) {
			for (int j = 0; j < N; j++) {
				printf("%c", input[i][j]);
			}
			printf("\n");
		}
	}

	else if (K == 2) {

		for (int i = 0; i < N; i++) {
			for (int j = N-1; j >=0; j--) {
				printf("%c", input[i][j]);
			}
			printf("\n");
		}
	}
}