#include <iostream>
using namespace std;

int r, e, c, tc;

int main() {
	scanf("%d", &tc);

	while (tc--) {
		scanf("%d %d %d", &r, &e, &c);
		int cmp = e - r - c;
		if (cmp > 0) printf("advertise\n");
		else if (cmp == 0) printf("does not matter\n");
		else printf("do not advertise\n");
	}
}