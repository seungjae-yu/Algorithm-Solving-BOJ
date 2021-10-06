#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int N, H, d[500002], u[500002], dd, uu;

multimap<int, int> m;
map<int, int> ans;

int main() {
	scanf("%d %d", &N, &H);

	for (int i = 0; i < N / 2; i++) {
		scanf("%d %d", &dd, &uu);
		d[dd]++, u[uu]++;
	}

	for (int i = H; i >= 2; i--)
		d[i - 1] += d[i], u[i - 1] += u[i];
	
	for (int i = 1; i <= H; i++)
		m.insert(make_pair(d[i] + u[H - i + 1], i));

	for (multimap<int, int>::iterator it = m.begin(); it != m.end(); it++)
		ans[it->first]++;

	cout << ans.begin()->first << " " << ans.begin()->second;
}