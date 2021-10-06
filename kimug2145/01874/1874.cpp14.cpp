#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int n, inp, now = 1;
stack<int> s;
vector<bool> v;
bool chk;

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &inp);

		if (inp >= now) {
			while (true) {				
				if (s.empty()) s.push(now++), v.push_back(1);
				if (s.top() == inp) break;
				else s.push(now++), v.push_back(1);
			}
		}

		if (!s.empty() &&inp == s.top()) {
			s.pop();
			v.push_back(false);
		}

		else {
			chk = true;
			break;
		}
	}

	if (chk) printf("NO\n");
	else {
		for (int i = 0; i < v.size(); i++)
			if (v[i])printf("+\n");
			else printf("-\n");
	}

}