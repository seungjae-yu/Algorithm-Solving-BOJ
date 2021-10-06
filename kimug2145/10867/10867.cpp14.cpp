#include <set>
#include <iostream>
using namespace std;

int tc;

int main() {

	scanf("%d", &tc);
	int inp;
	
	set<int> m;

	while (tc--) {
		scanf("%d", &inp);
		m.insert(inp);
	}

	set<int>::iterator it;
	
	for (it = m.begin(); it != m.end(); it++) {
		cout << *it << " ";
	}
	cout << "\n";
}
