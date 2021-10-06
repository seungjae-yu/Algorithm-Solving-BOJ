#include <iostream>
#include <algorithm>
using namespace std;

int inp[10][10];
int mmax, r, c;
int main() {

	for(int i=1;i<=9;i++)
		for (int j = 1; j <= 9; j++) {
			scanf("%d", &inp[i][j]);
			if (inp[i][j] > mmax) mmax = inp[i][j], r = i, c = j;
		}
	printf("%d\n%d %d", mmax, r, c);
}