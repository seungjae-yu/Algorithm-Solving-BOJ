#include <iostream>
#include <string>
using namespace std;

long long a, b, c;
int ans[10];
int main() {
	scanf("%lld %lld %lld", &a, &b, &c);
	string tmp = to_string(a*b*c);
	for (int i = 0; i < tmp.length(); i++) ans[tmp[i] - '0']++;
	for (int i = 0; i < 10; i++) printf("%d\n", ans[i]);
}