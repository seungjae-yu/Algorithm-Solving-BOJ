#include <iostream>
#include <string>
using namespace std;
int tc, M, ii;
char c, cc;
int main() {
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &M);
		scanf("%s", &c);
		if (c == 'C') {
			for (int i = 0; i < M; i++) {
				scanf("%s", &cc);
				printf("%d ", (int)(cc - 'A' + 1));
			}
			printf("\n");
		}
		else {
			for (int i = 0; i < M; i++) {
				scanf("%d", &ii);
				printf("%c ", (char)('A' + ii - 1));
			}
			printf("\n");
		}
	}
}