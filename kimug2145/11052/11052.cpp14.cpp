#include <iostream>
#include <algorithm>
using namespace std;

int N;
int bb[1001];
int dp[1001];

int func(int n) { //n 개 남음 

	if (n <= 0) return n;

	int& ret = dp[n];

	if (ret > 0) return ret;		
	
	for (int i = 1; i <= n; i++) {
		ret = max(ret , func(n-i) + bb[i]);
	}
	
	return ret;
}

int main() {

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) scanf("%d", &bb[i]);

	printf("%d\n", func(N));		
}