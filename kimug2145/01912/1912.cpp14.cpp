#include <iostream>
#include <algorithm>
using namespace std;
int N, inp, ssum, mmax = -1005, mcnt, allminus = -1005;
int main() {
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &inp);
		ssum += inp;
		if (ssum < 0) ssum = 0, mcnt++, allminus = max(inp, allminus);
		mmax = max(mmax, ssum);
	}
	if (mcnt == N) printf("%d", allminus);
	else printf("%d", mmax);
}