#include <iostream>
using namespace std;
int s, inp;
int main() {
	for (int i = 0; i < 4; i++) scanf("%d", &inp), s += inp;
	printf("%d\n%d\n", s / 60, s - (s / 60) * 60);
}