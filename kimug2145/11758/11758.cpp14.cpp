#include <iostream>
using namespace std;

typedef struct pos {
	int x, y;
};
pos p[3];

int main() {	
	for (int i = 0; i < 3; i++) scanf("%d %d", &p[i].x, &p[i].y);

	int res = p[0].x*p[1].y + p[1].x*p[2].y + p[2].x*p[0].y
		- p[0].y*p[1].x - p[1].y*p[2].x - p[2].y*p[0].x;
	printf("%d\n", res > 0 ? 1 : (res < 0 ? -1 : 0));
}