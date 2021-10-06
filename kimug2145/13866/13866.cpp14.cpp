#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int a[4];

int main() {
	scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
	sort(a, a + 4);
	printf("%d\n", abs((a[0] + a[3]) - (a[1] + a[2])));
}