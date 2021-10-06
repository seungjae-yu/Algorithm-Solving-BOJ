#include <iostream>
#include <queue>
using namespace std;

int N, M;
int sz;
queue<int> q;

int main() {
	scanf("%d %d", &N, &M);

	printf("<");
	for (int i = 1; i <= N; i++)
		q.push(i);

	int cnt = 0;
	int temp;
	sz = q.size();

	if (M == 1) {
		sz = q.size();
		while (sz != 1) {
			printf("%d, ", q.front());
			q.pop();
			sz--;
		}
	}

	while (sz != 1) {

		temp = q.front();
		q.pop();
		cnt++;
		q.push(temp);

		if (cnt == M - 1) {
			printf("%d, ", q.front());
			q.pop();
			cnt = 0;
			sz--;
		}
	}

	printf("%d", q.front());
	printf(">\n");
}