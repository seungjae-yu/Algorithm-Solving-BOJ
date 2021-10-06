#include <iostream>
#include <stack>
using namespace std;

int N,p;
int nxt = 1;
stack<int> s;

int main() {
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &p);
		s.push(p);

		while (!s.empty() && s.top() == nxt) {
			s.pop(); nxt++;
		}
	}
	
	if (s.empty()) printf("Nice\n");
	else printf("Sad\n");
}