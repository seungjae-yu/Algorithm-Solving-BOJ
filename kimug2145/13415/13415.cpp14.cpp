#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N, K, a, b;
int inp[100005];
int tmp[100005];
typedef pair<int, bool> ib;
vector<ib> v;

bool desc(int a, int b) {
	return a > b;
}

int main() {

	scanf("%d", &N);
	for (int i = 1; i <= N; i++) scanf("%d", &inp[i]);
	scanf("%d", &K);

	//0 오름차순
	//1 내림차순
	for (int i = 0; i < K; i++) {
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, 0));
		v.push_back(make_pair(b, 1));
	}

	deque<ib>dq;
	dq.push_back(v[0]);

	for (int i = 1; i < v.size(); i++) {
		if (dq.back().first < v[i].first) {
			while (!dq.empty() && dq.back().first < v[i].first) dq.pop_back();
		}
		dq.push_back(v[i]);
	}
	
	for (int i = 1; i <= dq.front().first; i++)
		tmp[i] = inp[i];

	sort(tmp + 1, tmp + dq.front().first+1);
	
	int mmin = 1;
	int mmax = dq.front().first;	
	int idx = mmax;

	while (!dq.empty()) {
		auto now = dq.front();
		dq.pop_front();
		
		if (dq.empty()) {			
			if (now.second == 0) {
				//오름차순							
				for (int i = idx; i >=1; i--)
					inp[i] = tmp[mmax--];
				sort(inp + 1, inp + 1 + now.first);
			}
			else {
			    //내림차순
				for (int i = idx; i >=1; i--)
					inp[i] = tmp[mmin++];
				sort(inp + 1, inp + 1 + now.first, desc);
			}
			break;
		}

		if (now.second == 0) {
			for (int i = 0; i < now.first - dq.front().first;i++)
				inp[idx--] = tmp[mmax--];			
		}
		else {						
			for (int i = 0; i < now.first - dq.front().first; i++)
			inp[idx--] = tmp[mmin++];
		}
	}

	for (int i = 1; i <= N; i++)
		cout << inp[i] << " ";
}