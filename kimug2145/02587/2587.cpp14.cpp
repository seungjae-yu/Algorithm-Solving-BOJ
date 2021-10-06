#include <iostream>
#include <algorithm>
using namespace std;
	
int arr[5], ssum;

int main() {

	for (int i = 0; i < 5; i++) scanf("%d", &arr[i]), ssum += arr[i];
	sort(arr, arr + 5);
	printf("%d\n%d\n", ssum / 5, arr[2]);
}