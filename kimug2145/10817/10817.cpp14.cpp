#include <iostream>
#include <algorithm>
using namespace std;

int a[3];

int main() {
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	sort(a, a + 3);
	printf("%d\n", a[1]);
}