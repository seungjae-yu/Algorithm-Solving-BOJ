#include <iostream>
#include <queue>
#include <string>
using namespace std;

int N;
string a;
int b;
queue<int> q;
int main() {

	scanf("%d", &N);

	while (N--) {

		cin >> a;

		if (a == "push") {
			cin >> b;
			q.push(b);
		}

		else if (a == "pop") {
			if (q.empty()) printf("-1\n");
			else {
				printf("%d\n", q.front());
				q.pop();
			}
		}

		else if (a == "size") {
			printf("%d\n", q.size());
		}

		else if (a == "empty") {
			if (q.empty()) printf("1\n");
			else printf("0\n");
		}

		else if (a == "front") {
			if (q.empty()) printf("-1\n");
			else printf("%d\n", q.front());
		}
		else if (a == "back") {
			if (q.empty()) printf("-1\n");
			else printf("%d\n", b);
		}

	}

}