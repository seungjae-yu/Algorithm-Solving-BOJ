#include <iostream>
using namespace std;

int r, w, l, cnt = 1;

int main()
{
	while (true) {
		scanf("%d", &r);
		if (r == 0)	break;

		scanf("%d %d", &w, &l);

		if (w*w + l*l > (r*r * 4)) printf("Pizza %d does not fit on the table.\n", cnt);
		else printf("Pizza %d fits on the table.\n", cnt);
		cnt++;
	}
}