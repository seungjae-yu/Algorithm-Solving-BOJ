#include <iostream>
#include <string>
using namespace std;

int tc;

string A, B;

int main() {

	scanf("%d", &tc);

	while (tc--) {

		cin >> A >> B;
		int cnt = 0;

		for (int i = 0; i < A.size(); i++) {
			if (A[i] != B[i]) cnt++;
		}
		printf("Hamming distance is %d.\n", cnt);
	}
}