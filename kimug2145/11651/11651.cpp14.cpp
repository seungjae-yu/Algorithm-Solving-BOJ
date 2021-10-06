#include <iostream>
#include <algorithm>
using namespace std;

struct p {
	int x, y;
};

bool cmp(struct p a, struct p b) {
	return a.y < b.y || (a.y == b.y) && (a.x < b.x);
}

p v[100002];
int tc, ix, iy;

int main() {	
	scanf("%d", &tc);	
	
	for (int i = 0; i < tc; i++) {
		scanf("%d %d", &ix, &iy);		
		v[i].x = ix;
		v[i].y = iy;
	}

	sort(v, v + tc, cmp);
	
	for (int i = 0; i < tc; i++)
		printf("%d %d\n", v[i].x, v[i].y);
}