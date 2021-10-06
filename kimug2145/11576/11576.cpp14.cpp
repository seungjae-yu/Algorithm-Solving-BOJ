#include <iostream>
#include <cmath>
using namespace std;
int A, B, m, x, res, idx = 0;

int main() {
	scanf("%d %d %d", &A, &B, &m);

	for (int i = m - 1; i >= 0; i--) {
		scanf("%d", &x);
		res += x * pow(A, i);
	}

	while (true) {
		if (res >= pow(B, idx)) {
			idx++;
		}
		else {
			break;
		}
	}
	while (true) {
		int tmp = (int)(res / (pow(B, idx - 1)));
		cout << tmp;
		res = res - tmp * pow(B, idx - 1);

		if (res == 0){
			if (idx != 0) {
				for (int i = 0; i < idx-1; i++)
					cout << " 0";
			}
			cout << "\n";
			break;
		}
		else
			cout << " ";
		idx--;
	}
}