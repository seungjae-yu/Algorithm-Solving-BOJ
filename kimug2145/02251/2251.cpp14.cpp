#include <iostream>
#include <queue>
#include <map>
#include <tuple>
using namespace std;

int A, B, C;
typedef tuple<int, int, int> t;
map<t, int> m;
queue<t> q;
bool chk[201];

int main() {

	scanf("%d %d %d", &A, &B, &C);
	q.push(make_tuple(0, 0, C));

	while (!q.empty()) {

		t now = q.front();
		q.pop();
		m[now]++;

		int a, b, c;
		tie(a, b, c) = now;

		if (a == 0) chk[c] = true;

		t tmp;
		//ab
		if (a >= 0 && b != B) {
			if (B - b > a) tmp = make_tuple(0, a + b, c);
			else tmp = make_tuple(a - B + b, B, c);
			if (!m[tmp]) { m[tmp]++; q.push(tmp); }
		}

		//ac
		if (a >= 0 && c != C) {
			if (C - c > a) tmp = make_tuple(0, b, a + c);
			else tmp = make_tuple(a - C + c, b, C);
			if (!m[tmp]) { m[tmp]++; q.push(tmp); }
		}

		//bc
		if (b >= 0 && c != C) {
			if (C - c > b) tmp = make_tuple(a, 0, b + c);
			else tmp = make_tuple(a, b - C + c, C);
			if (!m[tmp]) { m[tmp]++; q.push(tmp); }
		}

		//ba
		if (b >= 0 && a != A) {
			if (A - a > b) tmp = make_tuple(a + b, 0, c);
			else tmp = make_tuple(A, b - A + a, c);
			if (!m[tmp]) { m[tmp]++; q.push(tmp); }
		}

		//ca		
		if (c >= 0 && a != A) {
			if (A - a > c) tmp = make_tuple(a + c, b, 0);
			else tmp = make_tuple(A, b, c - A + a);
			if (!m[tmp]) { m[tmp]++; q.push(tmp); }
		}

		//cb
		if (c >= 0 && b != B) {
			if (B - b > c) tmp = make_tuple(a, b + c, 0);
			else tmp = make_tuple(a, B, c - B + b);
			if (!m[tmp]) { m[tmp]++; q.push(tmp); }
		}
	}

	for (int i = 0; i <= 200; i++) {
		if (chk[i])
			printf("%d ", i);
	}
}