#include <iostream>
using namespace std;

int a[1000001], b[1000001];
int na, nb, ia, ib;

int main() {
	scanf("%d %d", &na, &nb);
	for (int i = 0; i < na; i++) scanf("%d", &a[i]);
	for (int i = 0; i < nb; i++) scanf("%d", &b[i]);
	
	while (true) {
		if (a[ia] >= b[ib]) printf("%d ", b[ib++]);
		else if (a[ia] < b[ib]) printf("%d ", a[ia++]);

		if (ia == na) {
			for (int i = ib; i < nb; i++)printf("%d ", b[i]);
			break;
		}
		else if (ib == nb) {
			for (int i = ia; i < na; i++)printf("%d ", a[i]);
			break;
		}
	}
}