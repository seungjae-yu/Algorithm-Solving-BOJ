#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {

	int a[10000] = { 0, };
	int N = 0;
	int d = 0;

	scanf("%d", &N);
		
	for (int i = 0; i < N; i++) {
		scanf("%d", &d);
		a[d - 1] = a[d - 1] + 1;
	}
	
	for (int i = 0; i < 10000; i++) {
		int p = a[i];
		while (p--)
			printf("%d\n", i + 1);		
	}
}