#include <iostream>
using namespace std;

int H, M, ssum;

int main() {
	scanf("%d %d", &H, &M);
	ssum = H * 60 + M + 15;
	int h = ssum / 60;
	int m = ssum - h * 60;
	printf("%d %d", (h + 23) % 24, m);
}