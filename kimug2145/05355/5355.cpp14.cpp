#include <iostream>
#include <string>
using namespace std;

int tc;
float a;
string inp;

int main() {
	scanf("%d", &tc);

	while (tc--) {
		cin >> a;
		getline(cin, inp);
		for (int i = 0; i < inp.size(); i++) {
			if (inp[i] == '@') a *= 3.0f;
			else if (inp[i] == '%') a += 5.0f;
			else if (inp[i] == '#') a -= 7.0f;
		}
		printf("%.2f\n", a);
	}
}