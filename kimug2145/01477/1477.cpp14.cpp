#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, L, inp;
vector<int> v;

int main() {

	scanf("%d %d %d", &N, &M, &L);
	v.push_back(0);
	v.push_back(L);

	for (int i = 0; i < N; i++) {
		scanf("%d", &inp);
		v.push_back(inp);
	}

	sort(v.begin(), v.end());

	int left = 0;
	int right = L;
	int ans = 0;

	while (left <= right) {
		int	mid = (left + right) / 2;
		int cnt = 0;

		for (int i = 1; i < v.size(); i++)
			cnt += (v[i] - v[i - 1] - 1) / mid;

		if (cnt > M)
			left = mid + 1;
			
		else if (cnt <= M) {
			right = mid - 1;
			ans = max(right, mid);
		}
	}
	cout << ans;
}