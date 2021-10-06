#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int r, c;
char inp[22][22];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };
bool chk[26];
bool vis[22][22];
int ans;

void bt(int y, int x, int cnt) {

	ans = max(ans, cnt);

	chk[inp[y][x] - 'A'] = true;
	vis[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int yy = y + dy[i];
		int xx = x + dx[i];

		if (yy >= 0 && xx >= 0 && xx < c && yy < r && chk[inp[yy][xx] - 'A'] == false && vis[yy][xx] == false) {
			bt(yy, xx, cnt + 1);				
		}
	}

	vis[y][x] = false;
	if(inp[y][x]-'A' >= 0) chk[inp[y][x] - 'A'] = false;

}

int main() {
	scanf("%d %d", &r, &c);

	for (int i = 0; i < r; i++)
		cin >> inp[i];
	chk[inp[0][0] - 'A'] = true;
	bt(0, 0, 1);
	printf("%d\n", ans);
}