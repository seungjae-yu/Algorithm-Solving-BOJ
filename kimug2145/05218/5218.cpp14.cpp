#include <iostream>
#include <string>
using namespace std;

int tc;
string a, b;
int main() {
	scanf("%d", &tc);

	while (tc--) {
		cin >> a >> b;
		printf("Distances: ");
		for (int i = 0; i < a.size(); i++) printf("%d ", (b[i] - a[i] + 26) % 26);
		printf("\n");
	}
}