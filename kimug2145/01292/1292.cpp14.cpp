#include <iostream>
#include <vector>
using namespace std;

int a, b;
vector<int> v;
int main() {
	scanf("%d %d", &a, &b);

	v.push_back(0);

	for (int i = 1; i <= 50; i++)
		for (int j = 1; j <= i; j++)
			v.push_back(i);

	int ans = 0;
	for (int i = a; i <= b; i++)
		ans += v[i];

	printf("%d\n", ans);
}