#include <iostream>
#include <algorithm>
using namespace std;

int arr[8], cnt;
int main() {
	for (int i = 0; i < 8; i++) scanf("%d", &arr[i]);
	
	for (int i = 0; i < 8; i++) {
		if (arr[i] == i + 1) cnt++;
	}
	if (cnt == 8) {
		printf("ascending");
		exit(0);
	}
	cnt = 0;
	for (int i = 7; i >= 0; i--) {
		if (arr[7-i] == i + 1) cnt++;
	}
	if (cnt == 8) {
		printf("descending");
		exit(0);
	}
	printf("mixed");
}