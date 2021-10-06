#include <iostream>
using namespace std;

int tc, N;
double inp[1002];
int main() {
	scanf("%d", &tc);
	while (tc--) {
		double ssum = 0;
		scanf("%d", &N);
		int cnt = 0;
		for (int i = 0; i < N; i++) scanf("%lf", &inp[i]), ssum += inp[i];
		ssum = ssum / N;
		for (int i = 0; i < N; i++) if (inp[i] > ssum) cnt++;
		printf("%.3f", (double)cnt / N * 100);
		cout << "%\n";
	}
}