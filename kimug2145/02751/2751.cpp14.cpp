#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int A[1000000];

int main() {
	
	int tc=0;
	int a=0;
	scanf("%d",&tc);
	for (int i = 0; i < tc; i++) {
		scanf("%d", &a);
		A[i] = a;
	}
	
	sort(A, A + tc);

	for (int i = 0; i < tc; i++) {
		printf("%d\n", A[i]);
	}

	return 0;
}