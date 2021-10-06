#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int n, inp[52][52], bi, ei;
int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };
char c;
typedef pair<int, int> pii;

typedef struct {
	pii pos[3];
	int dis = 0;
}pi;

pi B, E;
queue<pi> q;
bool chk[52][52][2];

bool isV(pi t) {
	for (int i = 0; i < 3; i++) {
		int y = t.pos[i].first, x = t.pos[i].second;
		if (y< 1 || y > n || x< 1 || x> n || inp[y][x] != 0) return false;
	}
	return true;
}

bool isR(pii t) {
	int y = t.first, x = t.second;
	if (y - 1 < 1 || y + 1 > n || x - 1 < 1 || x + 1 > n || inp[y][x] != 0) return false;
	for (int i = y - 1; i <= y + 1; i++)
		for (int j = x - 1; j <= x + 1; j++)
			if (inp[i][j] != 0) return false;

	return true;
}

int main() {
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			scanf(" %1c", &c);
			if (c == 'B') B.pos[bi++] = { i,j };
			else if (c == 'E') E.pos[ei++] = { i,j };
			else inp[i][j] = (c == '0' ? 0 : 1);
		}

	q.push(B);

	if (B.pos[0].first == B.pos[1].first) chk[B.pos[1].first][B.pos[1].second][0] = true;
	else  chk[B.pos[1].first][B.pos[1].second][1] = true;

	while (!q.empty()) {
		int sz = q.size();
		while (sz--) {
			auto now = q.front();
			q.pop();

			if ((now.pos[0].first == E.pos[0].first && now.pos[0].second == E.pos[0].second
				&&now.pos[1].first == E.pos[1].first && now.pos[1].second == E.pos[1].second
				&&now.pos[2].first == E.pos[2].first && now.pos[2].second == E.pos[2].second)) {
				printf("%d\n", now.dis);
				exit(0);
			}

			if (isR(now.pos[1])) {
				pi r;

				if (now.pos[0].first == now.pos[1].first && !chk[now.pos[1].first][now.pos[1].second][1]) {
					chk[now.pos[1].first][now.pos[1].second][1] = true;
					r.pos[0] = { now.pos[1].first - 1,now.pos[1].second };
					r.pos[1] = now.pos[1];
					r.pos[2] = { now.pos[1].first + 1,now.pos[1].second };
					r.dis = now.dis + 1;
					q.push(r);
				}
				else if (now.pos[0].second == now.pos[1].second && !chk[now.pos[1].first][now.pos[1].second][0]) {
					chk[now.pos[1].first][now.pos[1].second][0] = true;
					r.pos[0] = { now.pos[1].first ,now.pos[1].second - 1 };
					r.pos[1] = now.pos[1];
					r.pos[2] = { now.pos[1].first ,now.pos[1].second + 1 };
					r.dis = now.dis + 1;
					q.push(r);
				}
			}

			pi tmp;
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 3; j++) {
					tmp.pos[j].first = now.pos[j].first + dy[i];
					tmp.pos[j].second = now.pos[j].second + dx[i];
				}

				if (isV(tmp)) {
					if (tmp.pos[0].first == tmp.pos[1].first && !chk[tmp.pos[1].first][tmp.pos[1].second][0]) chk[tmp.pos[1].first][tmp.pos[1].second][0] = true, tmp.dis = now.dis + 1, q.push(tmp);
					else if (tmp.pos[1].second == tmp.pos[0].second && !chk[tmp.pos[1].first][tmp.pos[1].second][1]) chk[tmp.pos[1].first][tmp.pos[1].second][1] = true, tmp.dis = now.dis + 1, q.push(tmp);
				}
			}
		}
	}
	printf("0\n");
}