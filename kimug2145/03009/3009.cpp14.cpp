#include <iostream>
#include <algorithm>
using namespace std;

typedef struct {
	int x, y;
}pos;

pos p[3];

bool cmp(pos a, pos b) {
	return (a.x < b.x) || (a.x == b.x && a.y < b.y);
}

int main() {	
	for (int i = 0; i < 3; i++) scanf("%d %d", &p[i].x, &p[i].y);
	sort(p, p + 3, cmp);
	
	if (p[0].x == p[1].x) {
		printf("%d %d\n", p[2].x, p[2].y == p[0].y ? p[1].y : p[0].y);
	}

	else {
		printf("%d %d\n", p[0].x, p[0].y == p[1].y ? p[2].y : p[1].y);
	}
}