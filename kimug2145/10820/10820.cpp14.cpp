#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char inp[111];

int main() {
	while (cin.getline(inp, 111)) {
		int a, b, c, d;
		a = b = c = d = 0;
		for (int i = 0; i < strlen(inp); i++) {
			if (inp[i] >= 'a' && inp[i] <= 'z')a++;
			else if (inp[i] >= 'A'&& inp[i] <= 'Z')b++;
			else if (inp[i] >= '0' && inp[i] <= '9') c++;
			else if (inp[i] = ' ') d++;
		}
		printf("%d %d %d %d\n", a, b, c, d);
	}
}