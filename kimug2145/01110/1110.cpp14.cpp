#include <iostream>
#include <string>
using namespace std;
int n, ans, init;
int chk[101];

int main() {	
	scanf("%d", &n);	
	init = n;
	chk[n] = true;
	while (true) {

		if (n < 10) {
			n = 10 * n + n;			
			ans++;
			chk[n] = true;
		}
		else {			
			ans++;		
			int t = n / 10;
			int o = n % 10;			
			n = o * 10 + (t + o) % 10;
			chk[n] = true;
		}
		if (n == init) {		
			break;
		}		
	}
	printf("%d", ans);
}