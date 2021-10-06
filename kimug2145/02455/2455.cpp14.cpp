#include <iostream>

using namespace std;

int st[4];
int up, down, m = 0, cnt = 0;

int main() {

	for (int i = 0; i < 4; i++) {
		
		scanf("%d %d", &up, &down);		
		cnt += down - up;
		if (cnt > m)
			m = cnt;
	}

	printf("%d\n", m);

	return 0;
}