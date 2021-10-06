#include <iostream>
using namespace std;

int main() {
	int sc;
	scanf("%d", &sc);
	if (sc >= 90 && sc <= 100) printf("A");
	else if (sc >= 80 && sc <= 89) printf("B");
	else if (sc >= 70 && sc <= 79) printf("C");
	else if (sc >= 60 && sc <= 69) printf("D");
	else printf("F");
}