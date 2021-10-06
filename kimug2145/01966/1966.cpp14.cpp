#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>

using namespace std;
int tc;
int N, M;
int priority;

int main() {

	scanf("%d", &tc);

	while (tc--) {
		deque<pair <int, int> > dq;
		vector<int> v;
		scanf("%d %d", &N, &M);
		for (int i = 0; i < N; i++) {
			scanf("%d", &priority);
			dq.push_back(make_pair(i, priority));
			v.push_back(priority);
		}

		int cnt = 0;

		while (!dq.empty()) {
			sort(v.begin(), v.end());
			pair<int, int> now = dq.front();
			
			if (now.second >= v[N-1]) {
				v[N - 1] = -1;
				cnt++;
				dq.pop_front();
				if (now.first == M) break;
			}

			else {
				dq.push_back(now);
				dq.pop_front();
				//if (now.first == M) break;
			}
		}

		cout << cnt << "\n";

	}
	
}