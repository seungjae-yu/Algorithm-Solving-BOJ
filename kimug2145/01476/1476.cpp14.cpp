#include <iostream>
using namespace std;

int E, S, M, e, s, m, cnt = 1;

int main() {

	scanf("%d %d %d", &E, &S, &M);

	e = s = m = 1;

	while (true) {
		if (s == S && e == E && m == M) break;		
		e = e % 15 + 1;
		s = s % 28 + 1;
		m = m % 19 + 1;		
		cnt++;
	}
	printf("%d\n", cnt);
}