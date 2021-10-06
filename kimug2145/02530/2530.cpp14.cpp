#include <iostream>
using namespace std;
int A, B, C, D,sum;
int main() {
	scanf("%d %d %d", &A, &B, &C);
	scanf("%d", &D);
	sum = A * 3600 + B * 60 + C + D;	
	A = sum / 3600;
	sum = sum - 3600 * A;
	B = sum / 60;
	sum = sum - 60 * B;	
	C = sum;
	A = A % 24;
	printf("%d %d %d", A, B, C);
}