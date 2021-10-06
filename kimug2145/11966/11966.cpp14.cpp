#include <iostream>
#include <cmath>

int main() {

	int arr[32];

	for (int i = 0; i < 32; i++) {
		arr[i] = 1 << i;
	}

	int a;
	
	scanf("%d", &a);

	for (int i = 0; i < 32; i++) {
		if (arr[i] == a) { printf("1\n"); exit(0); }
	}

	printf("0\n");

}