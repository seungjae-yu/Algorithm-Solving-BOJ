#include <iostream>
#include <algorithm>
using namespace std;

int N, inp[1002], mmax;
double ssum;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &inp[i]);		
		mmax = max(inp[i], mmax);
	}
	
	for (int i = 0; i < N; i++) {
		ssum += (double)inp[i] / mmax * 100;
	}

	printf("%.2f", (double)ssum / N);
}