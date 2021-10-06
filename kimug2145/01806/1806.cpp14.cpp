#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, S, inp[100005], ans = 1987654321;
int lo, hi, sum, len;
vector<int> v;
int main() {
	scanf("%d %d", &N, &S);
	for (int i = 0; i < N; i++) scanf("%d", &inp[i]);

	while (true) {
		if (sum >= S) sum -= inp[lo++];
		else if (hi == N) break;
		else sum += inp[hi++];
		if (sum >= S) v.push_back(hi - lo);
	}
	if (v.empty()) printf("0");
	else printf("%d", *min_element(v.begin(), v.end()));
}