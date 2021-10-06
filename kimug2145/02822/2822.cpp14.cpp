#include <iostream>
#include <map>
#include <set>
using namespace std;

map<int, int> m;
set<int> s;
int inp, cnt, ssum;

int main() {
	for (int i = 0; i < 8; i++) {
		scanf("%d", &inp);
		m.insert({ -inp ,i });
	}
	
	for (map<int, int>::iterator it = m.begin(); cnt < 5; it++,cnt++) {
		ssum += it->first;
		s.insert(it->second+1);
	}
	printf("%d\n", -ssum);
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
		printf("%d ", *it);
}