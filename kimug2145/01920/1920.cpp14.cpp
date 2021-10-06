#include <map>
#include <iostream>
using namespace std;
map<int, int> m;
int N, M, inp;
int main() {
	scanf("%d", &N);

	while (N--) {
		scanf("%d", &inp);
		m[inp]++;
	}

	scanf("%d", &M);
	while (M--) {
		scanf("%d", &inp);
		if (!m[inp]) printf("0\n");
		else printf("1\n");
	}
}