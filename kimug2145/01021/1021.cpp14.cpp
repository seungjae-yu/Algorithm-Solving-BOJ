#include <iostream>
#include <deque>
using namespace std;

int n, m, inp, cnt, pos;
deque<int> dq;

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) dq.push_back(i);

	for (int i = 0; i < m; i++) {
		scanf("%d", &inp);

		if (dq.front() == inp) dq.pop_front();
		else {
			for (int j = 0; j < dq.size(); j++) {
				pos = j;
				if (dq[j] == inp) break;
			}
						
			if (pos > dq.size() / 2) {
				while (true) {
					if (dq.front() == inp) break;
					cnt++;
					dq.push_front(dq.back());
					dq.pop_back();					
				}			
			}

			else {
				while (true) {
					if (dq.front() == inp) break;
					cnt++;					
					dq.push_back(dq.front());
					dq.pop_front();
				}
			}
			dq.pop_front();
		}
	}

	cout << cnt << "\n";	
}