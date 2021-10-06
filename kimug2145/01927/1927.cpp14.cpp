#include <iostream>
#include <queue>
using namespace std;

int n;
long long inp;
priority_queue<long long> pq;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &inp);
		if (inp == 0) {
			if (pq.empty()) printf("0\n");
			else printf("%lld\n", -pq.top()), pq.pop();
		}
		else pq.push(-inp);
	}
}