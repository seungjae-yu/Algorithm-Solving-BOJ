#include <iostream>
#include <deque>
#include <string>
using namespace std;

deque<int> d;
string a;
int b, N;

int main() {

	scanf("%d", &N);

	while (N--) {

		cin >> a;

		if (a == "push_front") {
			cin >> b;
			d.push_front(b);
		}

		else if (a == "push_back") {
			cin >> b;
			d.push_back(b);
		}

		else if (a == "pop_front") {
			if (d.empty()) printf("-1\n");
			else {
				printf("%d\n", d.front());
				d.pop_front();
			}
		}

		else if (a == "pop_back") {
			if (d.empty()) printf("-1\n");
			else {
				printf("%d\n", d.back());
				d.pop_back();
			}
		}

		else if (a == "size") {
			printf("%d\n", d.size());
		}

		else if (a == "empty") {
			if (d.empty()) printf("1\n");
			else printf("0\n");
		}

		else if (a == "front") {
			if (d.empty()) printf("-1\n");
			else printf("%d\n", d.front());
		}

		else if (a == "back") {
			if (d.empty()) printf("-1\n");
			else printf("%d\n", d.back());
		}

	}

}