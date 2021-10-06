#include <iostream>
#include <stack>
#include <string>
using namespace std;

int N;
stack<int> s;

string a;
int b;

int main() {

	scanf("%d", &N);
	
	while (N--) {
	
		cin >> a;

		if (a == "push") {
			scanf("%d", &b);
			s.push(b);
		}

		else if (a == "top") {
			if (s.empty()) printf("-1\n");
			else printf("%d\n", s.top());
		}

		else if (a == "size") {
			printf("%d\n", s.size());
		}

		else if (a == "pop") {

			if (s.empty()) printf("-1\n");
			else {
				printf("%d\n", s.top());
				s.pop();
			}
		}

		else if (a == "empty") {
			if (s.empty()) printf("1\n");
			else printf("0\n");
		}
	}
}