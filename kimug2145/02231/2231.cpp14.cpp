#include <iostream>
#include <algorithm>
using namespace std;

int n;

int sd(int now) {

	if (now < 10) return now;

	int ret = 0;

	while (true) {		
		if (now < 10) {
			ret += now;
			break;
		}

		else {
			ret += now - (now / 10) * 10;
			now = now / 10;
		}
	}
	return ret;
}

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int ssum = i;
		ssum += sd(i);

		if (ssum == n) {			
			printf("%d\n", i);
			exit(0);
		}
	}
	printf("%d\n", 0);
}