#include <iostream>
using namespace std;

int tc, n;
double sc, gr;

int main() {
	scanf("%d", &tc);

	while (tc--) {
		double ssum = 0.0f;
		int sn = 0;
		scanf("%d", &n);

		while (n--) {
			cin >> gr >> sc;
			ssum += gr*sc;
			sn += gr;
		}

		printf("%d %.1f\n", sn,ssum / sn);
	}
}