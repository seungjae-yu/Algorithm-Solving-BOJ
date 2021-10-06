#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int r, c, cnt, tot;
int arr[1005][1005];
bool chk[1005][1005];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

typedef struct {
	int y, x, day;
}pos;

vector<pos>v;

int main() {	
	scanf("%d %d", &c, &r);
	tot = c*r;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {		
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == -1) tot--;
			if (arr[i][j] == 1) cnt++, v.push_back({ i,j,0 });
		}
	
	if (tot == cnt) {
		printf("0\n");
		exit(0);
	}

	queue<pos> q;	
	for (int i = 0; i < v.size(); i++) q.push(v[i]);

	while (!q.empty()) {
		int y = q.front().y;
		int x = q.front().x;
		int d = q.front().day;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int xx = dx[i] + x;
			int yy = dy[i] + y;
			
			if (xx >= 0 && xx < c && yy >= 0 && yy < r && chk[yy][xx] == 0 && arr[yy][xx] == 0) {
				chk[yy][xx] = 1;
				cnt++;
				if (cnt == tot) {
					printf("%d\n", d + 1);
					exit(0);
				}
				q.push({ yy,xx,d + 1 });
			}
		}

	}
	printf("-1\n");
}