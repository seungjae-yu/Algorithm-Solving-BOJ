#include <iostream>
#include <string>
#include <map>
using namespace std;

int n, m, iter, cnt;
char s[22];
map<string, int> inp;

int main() {
	scanf("%d %d", &n, &m);
	iter = n + m;
	for (int i = 0; i < iter; i++) scanf("%s", &s), cnt = ++inp[s] == 2 ? cnt + 1 : cnt;
	printf("%d\n", cnt);
	for (auto i : inp) if (i.second == 2) cout << i.first << "\n";
}