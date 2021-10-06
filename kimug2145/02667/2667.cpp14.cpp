#include <iostream>
#include <algorithm>
using namespace std;

int N;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

int inp[26][26];
int cnt = 2;
int arr[630];
int idx = 0;
int ans = 0;

void DFS(int x, int y) {

	inp[x][y] = cnt;
	ans++;
	arr[idx] = ans;

	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx >= 1 && yy >= 1 && yy <= N && xx <= N && inp[xx][yy] == 1)
			DFS(xx, yy);
	}
}

int main() {

	cin >> N;	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			scanf("%1d", &inp[i][j]);
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (inp[i][j] == 1) {
				DFS(i, j);
				cnt++;
				idx++;
			}
			else {
				ans = 0;
			}
		}	
	}

	cout << cnt - 2 << "\n";

	sort(arr, arr + idx);

	for (int i = 0; i < idx; i++)
		cout << arr[i] << "\n";
}