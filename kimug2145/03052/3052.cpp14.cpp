#include <iostream>
#include <set>
using namespace std;
set<int>s;
int inp;
int main() {
	for (int i = 0; i < 10; i++) {
		scanf("%d", &inp);
		s.insert(inp % 42);
	}
	printf("%d\n", s.size());
}