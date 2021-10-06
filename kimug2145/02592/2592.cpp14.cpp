#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<int, int>m;
int inp, ssum;
int main() {

	for (int i = 0; i < 10; i++) {
		scanf("%d", &inp);
		m[inp]++;
		ssum += inp;
	}

	int ans = 0, chk = -1;
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		if (it->second > chk) chk = it->second, ans = it->first;
	}

	printf("%d\n%d\n", ssum / 10, ans);
}