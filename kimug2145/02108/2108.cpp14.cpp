#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int N, inp, ssum, mmin = 5555, mmax = -5555;
map<int, int>m;
vector<int> v, w;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &inp);
		m[inp]++;
		ssum += inp;
		v.push_back(inp);
		mmin = min(mmin, inp);
		mmax = max(mmax, inp);
	}

	int val = -1;
	int ans = 0;
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		if (it->second > val) ans = it->first, val = it->second;
	}

	int cnt = 0;
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		if (it->second == val)cnt++, w.push_back(it->first);
	}

	if (cnt >= 2) {
		sort(w.begin(), w.end());
		ans = w[1];
	}

	sort(v.begin(), v.end());
	printf("%d\n", (int)(floor((double)ssum / N + 0.5)));
	printf("%d\n", v[N / 2]);
	printf("%d\n", ans);
	printf("%d\n", abs(mmax - mmin));
}