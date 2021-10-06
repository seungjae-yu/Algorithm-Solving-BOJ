#include <iostream>
#include <algorithm>
using namespace std;

int ar[4];
int main() {
	for (int i = 0; i < 4; i++) scanf("%d", &ar[i]);
	sort(ar, ar + 4);
	printf("%d\n", ar[0] * ar[2]);
}