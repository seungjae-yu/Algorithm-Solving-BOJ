#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll i, j, ssum;

int main()
{
	scanf("%lld %lld", &i, &j);
	if (j > i) swap(j, i);
	printf("%lld", ((i - j + 1)*(j + i)) / 2);
}