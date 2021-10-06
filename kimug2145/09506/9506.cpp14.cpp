#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {	
	while (true) {
		scanf("%d", &n);
		if (n == -1) break;
		bool chk = false;
		int ssum = 0;
		vector<int> v;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) ssum += i, v.push_back(i);
			if (ssum > n) {
				printf("%d is NOT perfect.\n", n);
				chk = true;
				break;
			}
		}

		if (chk) continue;

		if (ssum == n) {
			printf("%d = ", n);
			for (int i = 0; i < v.size()-1; i++) {
				printf("%d + ", v[i]);
			}
			printf("%d\n", v[v.size() - 1]);
		}
		else printf("%d is NOT perfect.\n", n);
	}
}