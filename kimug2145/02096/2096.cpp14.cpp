#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int inp[100002][3], bg[2][3], sm[2][3];

int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &inp[i][0], &inp[i][1], &inp[i][2]);
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				bg[1][j] = max(bg[0][j], bg[0][j + 1]) + inp[i][j];
				sm[1][j] = min(sm[0][j], sm[0][j + 1]) + inp[i][j];
			}
			if (j == 1) {
				bg[1][j] = max(max(bg[0][j - 1], bg[0][j]), bg[0][j + 1]) + inp[i][j];
				sm[1][j] = min(min(sm[0][j - 1], sm[0][j]), sm[0][j + 1]) + inp[i][j];
			}
			if (j == 2) {
				bg[1][j] = max(bg[0][j], bg[0][j - 1]) + inp[i][j];
				sm[1][j] = min(sm[0][j], sm[0][j - 1]) + inp[i][j];
			}
		}

		for (int i = 0; i < 1; i++) {
			for (int j = 0; j < 3; j++) {
				bg[i][j] = bg[i + 1][j];
				sm[i][j] = sm[i + 1][j];
			}
		}
	}
	printf("%d %d", max(bg[0][0], max(bg[0][1], bg[0][2])), min(sm[0][0], min(sm[0][1], sm[0][2])));
}