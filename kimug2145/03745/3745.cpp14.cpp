#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, inp;

int main() {
	while (~scanf("%d", &N)) {
		vector<int> v(1, 0);
		for (int i = 0; i < N; i++) {
			scanf("%d", &inp);
			if (v.back() < inp) v.push_back(inp);
			else (*lower_bound(v.begin(), v.end(), inp)) = inp;
		}
		printf("%d\n", v.size() - 1);
	}
}