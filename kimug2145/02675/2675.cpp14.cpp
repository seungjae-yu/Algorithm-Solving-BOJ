#include <iostream>
#include <string>
using namespace std;

string inp;
int tc;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		int iter;
		scanf("%d", &iter);
		cin >> inp;
		for (int i = 0; i < inp.length(); i++) {
			for (int j = 0; j < iter; j++) cout << inp[i];
		}
		printf("\n");
	}
}