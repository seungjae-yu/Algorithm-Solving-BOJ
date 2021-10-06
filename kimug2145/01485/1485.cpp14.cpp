#include <iostream>
#include <algorithm>
using namespace std;

struct pos {
	int x, y;
};

int tc, d[6];

int dist(pos a, pos b) {
	return (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y);
}

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	scanf("%d", &tc);
	pos p[4];
	while (tc--) {
		for (int i = 0; i < 4; i++) {
			scanf("%d %d", &p[i].x, &p[i].y);
		}

		for (int i = 0; i < 4; i++) {
			d[i] = dist(p[i % 4], p[(i + 1) % 4]);
		}
		d[4] = dist(p[0], p[2]);
		d[5] = dist(p[1], p[3]);
		sort(d, d + 6, cmp);

		if (d[0] == d[1] && d[2] == d[3] && d[3] == d[4] && d[4] == d[5] && d[0] > d[3]) printf("1\n");
		else printf("0\n");
	}
}