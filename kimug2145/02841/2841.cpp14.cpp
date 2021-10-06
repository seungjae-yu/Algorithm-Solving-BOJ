#include <iostream>
#include <stack>
using namespace std;

int N, P;
stack<int> s[8];

int main() {

	scanf("%d %d", &N, &P);
	int cnt = 0;
	while (N--) {

		int a, b;
		scanf("%d %d", &a, &b);

		if (s[a].empty()) {
			s[a].push(b);
			cnt++;
		}

		else {

			if (s[a].top() < b) {
				cnt++;
				s[a].push(b);
			}

			else if (s[a].top() > b) {

				while (!s[a].empty()) {

					if (s[a].top() < b) {
						s[a].push(b);
						cnt++;
						break;
					}
					else if (s[a].top() > b) {
						s[a].pop();
						cnt++;
						if (s[a].empty()) {
							cnt++, s[a].push(b);
						}
					}
					else break;
				}
			}
		}
	}

	cout << cnt << "\n";
}