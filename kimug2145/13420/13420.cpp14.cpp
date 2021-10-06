#include <iostream>
#include <string>
using namespace std;

int tc;
typedef long long ll;
int main() {

	scanf("%d", &tc);

	ll a, b, e;
	char c, d;

	while (tc--) {

		scanf("%lld %c %lld %c %lld", &a, &c, &b, &d, &e);
		bool chk = false;

		if (c == '*') {
			if (a*b == e) chk = true;
		}
		
		else if (c == '+') {
			if (a + b == e)chk = true;
		}
		else if (c == '-') {
			if (a - b == e) chk = true;
		}
		else if (c == '/') {
			if (a / b == e) chk = true;
		}

		if (chk) printf("correct\n");
		else printf("wrong answer\n");
	}
}