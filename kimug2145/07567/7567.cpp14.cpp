#include <iostream>

using namespace std;

char c[51];
int cnt = 0;
int main() {

	scanf("%s", &c);

	for (int i = 0; c[i] != NULL; i++) {
		if (c[i] == c[i + 1])
			cnt += 5;
		else
			cnt += 10;
	}
	printf("%d\n", cnt);
}