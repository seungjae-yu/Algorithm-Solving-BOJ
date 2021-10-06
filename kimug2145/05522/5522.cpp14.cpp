#include <iostream>
using namespace std;

int ip, ssum;

int main() {
	for (int i = 0; i < 5; i++) scanf("%d", &ip), ssum += ip;
	printf("%d\n", ssum);
}