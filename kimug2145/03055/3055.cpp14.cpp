#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int s, r;
char inp[52][52];
int water[52][52];
int esc[52][52];

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

int sx, sy, ex, ey;

int main() {
	memset(water, -1, sizeof(water));
	memset(esc, -1, sizeof(esc));

	scanf("%d %d", &s, &r);	
	for (int i = 1; i <= s; i++)
		for (int j = 1; j <= r; j++)
			cin >> inp[i][j];
	
	queue<pair <int, int> >q;
	
	for (int i = 1; i <= s; i++) {
		for (int j = 1; j <= r; j++) {

			if (inp[i][j] == 'S') sx = i, sy = j;
			else if (inp[i][j] == 'D') ex = i, ey = j;
			if (inp[i][j] == '.') {

				for (int k = 0; k < 4; k++) {
					int xx = i + dx[k];
					int yy = j + dy[k];

					if (xx >= 1 && yy >= 1 && xx <= s && yy <= r && inp[xx][yy] == '*') {
						q.push(make_pair(i, j));
						water[i][j] = 1;
					}
				}
			}
		}
	}
	
	while (!q.empty()) {
		int nx = q.front().first;
		int ny = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int xx = nx + dx[i];
			int yy = ny + dy[i];
			
			if (xx >= 1 && yy >= 1 && xx <= s && yy <= r
				&& water[xx][yy] == -1 && inp[xx][yy] != 'X' && inp[xx][yy] != 'D') {
				water[xx][yy] = water[nx][ny] + 1;
				q.push(make_pair(xx, yy));
			}
		}
	}

	esc[sx][sy] = 0;
	q.push(make_pair(sx, sy));

	while (!q.empty()) {
		int nx = q.front().first;
		int ny = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int xx = nx + dx[i];
			int yy = ny + dy[i];
						
			if (xx >= 1 && yy >= 1 && xx <= s && yy <= r
				&& esc[xx][yy] == -1 && inp[xx][yy] != 'X'
				&& (water[xx][yy] > esc[nx][ny] + 1 || water[xx][yy] == -1)) {
				esc[xx][yy] = esc[nx][ny] + 1;
				q.push(make_pair(xx, yy));
			}
		}
	}
	if (esc[ex][ey] != -1) printf("%d\n", esc[ex][ey]);
	else printf("KAKTUS\n");
}