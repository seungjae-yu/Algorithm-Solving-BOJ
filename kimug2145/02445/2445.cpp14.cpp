#include <iostream>
#include <string>
using namespace std;
int N;
string r = "";
int main() {

	scanf("%d", &N);
	int cnt = 0;
	for (int i = 0; i < N; i++) {

		for (int j = 0; j <= i; j++) {
			printf("*");
			if (i < N - 1) r += "*";
		}

		for (int j = (N - 1) * 2; j - i * 2 > 0; j--) {
			printf(" ");
			if (i < N - 1) r += " ";
		}

		for (int j = 0; j <= i; j++) {
			printf("*");
			if (i < N - 1) r += "*";
		}
		printf("\n");
		r += "\n";
	}

	string res = "";

	for (int i = r.size() - 3; i >= 0;i-- ) {
		res += r[i];
	}

	cout << res;
}