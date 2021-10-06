#include <iostream>
#include <cmath>
using namespace std;

int n, m, ssum, a;
bool chk = false;

int main() {
	scanf("%d %d", &n, &m);

	int st = (int)sqrt(n);
	int ed = (int)sqrt(m);

	for (int i = st; i <= ed; i++) {		
		if (i*i <= m && i*i>=n) {
			ssum += i*i;			
			if (chk == false) a = i*i, chk = true;
		}
	}
	
	if (chk == false) printf("-1");
	else printf("%d\n%d\n", ssum, a);
}