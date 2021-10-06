#include <iostream>
int S, T, D;
int main() {
	scanf("%d %d %d", &S, &T, &D);
	printf("%d\n", (D / (S * 2))*T);
}