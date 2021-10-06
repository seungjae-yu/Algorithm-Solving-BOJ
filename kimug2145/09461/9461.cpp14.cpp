#include <iostream>
using namespace std;

long long P[101];

int main() {

	P[1] = 1;
	P[2] = 1;
	P[3] = 1;

	long long N;
	int tc;

	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%lld", &N);

		for (int i = 1; i < N + 1; i++) {
			P[i + 3] = P[i] + P[i + 1];
		}

		cout << P[N] << "\n";
	}
}