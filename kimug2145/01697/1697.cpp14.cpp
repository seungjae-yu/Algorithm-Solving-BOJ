#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int N, K, cnt;
int chk[400000];
queue<int> q;

int main() {

	scanf("%d %d", &N, &K);
	q.push(N);

	if (N > K) {
		printf("%d\n", N - K);
		exit(0);
	}

	while (!q.empty()) {

		int now = q.front();
		if (now == K) {
			printf("%d\n", chk[now]);
			exit(0);
		}
		q.pop();
		int t = chk[now];
		if (now - 1 >= 0 && chk[now - 1] == 0) {
			
			q.push(now - 1);
			chk[now - 1] = t + 1;
		}

		if (now + 1 >= 0 && chk[now + 1] == 0) {
			q.push(now + 1);			
			chk[now + 1] = t + 1;
		}

		if (now * 2 <= 400000 && chk[now * 2] == 0) {
			q.push(now * 2);			
			chk[now * 2] = t + 1;
		}
	}
}