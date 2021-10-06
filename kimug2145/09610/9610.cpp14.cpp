#include <iostream>
using namespace std;

int n, x, y, q1, q2, q3, q4, ax;

int main() {
	scanf("%d", &n);

	while (n--) {
		scanf("%d %d", &x, &y);
		if (x == 0 || y == 0)ax++;
		if (x > 0 && y > 0) q1++;
		if (x < 0 && y > 0) q2++;
		if (x < 0 && y < 0) q3++;
		if (x > 0 && y < 0) q4++;
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", q1, q2, q3, q4, ax);
}