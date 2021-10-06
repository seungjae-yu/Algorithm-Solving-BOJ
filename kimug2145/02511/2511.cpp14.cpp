#include <iostream>
using namespace std;

int A[11];
int B[11];

int sa, sb;
int last = 0;
int chk = 0;
int main() {
	
	sa = sb = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < 10; i++) {
		scanf("%d", &B[i]);
	}

	for (int i = 0; i < 10; i++) {

		if (A[i] > B[i]) { sa += 3; last = 1; }
		else if (A[i] < B[i]) { sb += 3; last = 2; }
		else { sa++; sb++; chk++; }
	}

	printf("%d %d\n", sa, sb);

	if (sa > sb) printf("A");
	else if (sa < sb) printf("B");
	else {
		if(last ==1)  printf("A");
		else if(last == 2) printf("B");
		if (chk == 10) printf("D");
	}
	
}