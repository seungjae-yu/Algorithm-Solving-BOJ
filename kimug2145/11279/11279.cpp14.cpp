#include <iostream>
#include <queue>
#include <functional>
#include <vector>
using namespace std;

int N, inp;
priority_queue<int, vector<int>, less<int>> pq;

int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &inp);
		if (inp > 0) pq.push(inp);
		else if (inp == 0) {
			if (pq.empty()) printf("0\n");
			else printf("%d\n", pq.top()), pq.pop();
		}
	}
}