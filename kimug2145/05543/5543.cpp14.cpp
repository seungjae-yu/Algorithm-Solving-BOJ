#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c, d, e, ans;

int main() {
	cin >> a >> b >> c >> d >> e;
	ans = min(a, min(b, c)) + min(d, e) - 50;
	printf("%d\n", ans);
}