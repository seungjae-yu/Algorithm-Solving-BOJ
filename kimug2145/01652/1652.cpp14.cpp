#include <iostream>
#include <string>
using namespace std;

int n, r, c;
char arr[101][101];

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[i][j] == '.' && arr[i][j + 1] == '.' && arr[i][j + 2] != '.') r++;
			if (arr[j][i] == '.' && arr[j + 1][i] == '.' && arr[j + 2][i] != '.') c++;
		}
	}
	printf("%d %d", r, c);	
}