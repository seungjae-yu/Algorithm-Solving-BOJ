#include <iostream>
#include <algorithm>
using namespace std;

int house[1001][3];

int n;

int main() {

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &house[i][0], &house[i][1], &house[i][2]);
	}

	for (int i = 1; i < n; i++) {
		house[i][0] += min(house[i - 1][1], house[i - 1][2]);
		house[i][1] += min(house[i - 1][0], house[i - 1][2]);
		house[i][2] += min(house[i - 1][0], house[i - 1][1]);
	}

	cout << min(house[n-1][0], min(house[n-1][1], house[n-1][2])) << "\n";
}