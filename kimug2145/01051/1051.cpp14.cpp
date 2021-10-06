#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int arr[51][51];
vector < int >v;

int main() {

	int N, M;

	scanf("%d %d", &N, &M);

	memset(arr, -1, sizeof(arr));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			for (int k = 0; k < max(N, M); k++) {

				if (arr[i][j] == arr[i + k][j + k]
					&& arr[i][j] == arr[i + k][j]
					&& arr[i][j] == arr[i][j + k]
					&& i + k < N && j + k < M) {					
					v.push_back((k + 1)*(k + 1));
				}
			}
		}
	}

	cout<<*max_element(v.begin(), v.end());
	
}