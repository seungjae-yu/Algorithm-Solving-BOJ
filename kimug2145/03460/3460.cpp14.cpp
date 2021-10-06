#include <iostream>
#include<stack>

using namespace std;

int tc, N;
int cmp;
int idx;
stack<int> s;
int main() {

	scanf("%d", &tc);

	while (tc--) {
		cmp = 1;
		scanf("%d", &N);

		for (int i = 0; cmp <= N; i++) {
			cmp = 1 << i;
			idx = i;
		}
		
		while (N != 0) {
			if (N - (1 << (idx - 1)) >= 0) {
				s.push(idx - 1);
				N = N - (1 << (idx - 1));
			}
			idx--;
		}

		while (!s.empty()) {

			cout << s.top() << " ";
			s.pop();
		}

		cout << "\n";

	}

}