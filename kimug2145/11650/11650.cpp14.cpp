#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

struct p {
	int _x;
	int _y;
};

bool cmp(const struct p & a, const struct p & b) {
	return a._x < b._x || (a._x == b._x && a._y < b._y);
}

vector <p> v;

int main() {

	int tc;
	scanf("%d", &tc);

	int x;
	int y;

	p temp;

	for (int i = 0; i < tc; i++) {
		scanf("%d %d", &x, &y);
		temp._x = x;
		temp._y = y;
		v.push_back(temp);
	}

	vector<p>::iterator it;
	vector<p>::iterator e = v.end();
	it = v.begin();
	sort(it, e, cmp);

	for (it = v.begin(); it != v.end(); it++) {
		printf("%d %d\n", it->_x, it->_y);
	}

	return 0;
}