#include <iostream>
#include <algorithm>
using namespace std;

int N, arr[1005];
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
	sort(arr, arr + N);
	for (int i = 0; i < N; i++)printf("%d\n", arr[i]);
}