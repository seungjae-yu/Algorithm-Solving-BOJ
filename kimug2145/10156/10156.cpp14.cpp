#include <iostream>
using namespace std;

int k, n, m, res;

int main() {
	scanf("%d %d %d", &k, &n, &m);
	res = k*n - m;
	if (res > 0) printf("%d\n", res);
	else printf("0\n");
}