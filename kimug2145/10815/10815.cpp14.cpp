#include <stdio.h>
#include <map>
int N, M, a;
std::map<int, int> m;
int main() {
	scanf("%d", &N);
	while (N--) scanf("%d", &a), m[a]++;
	scanf("%d", &M);
	while (M--) {
		scanf("%d", &a);
		if (!m[a]) printf("0 ");
		else printf("1 ");
	}
}