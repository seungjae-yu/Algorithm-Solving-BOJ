#include <iostream>
using namespace std;

long long k[70];
int N,tc;
int main() {

	k[0] = k[1] = 1;
	k[2] = 2;
	k[3] = 4;
	
	for (int i = 4; i <= 67; i++) {
		k[i] = k[i - 1] + k[i - 2] + k[i - 3] + k[i - 4];	
	}

	scanf("%d", &tc);
	while (tc--){
		scanf("%d", &N);
		printf("%lld\n", k[N]);
	}
}