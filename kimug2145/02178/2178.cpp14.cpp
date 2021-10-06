#include <stdio.h>
#include <queue>
using namespace std;
  
struct POINT { int a; int b; };
int h = 0;  // 세로(행)
int w = 0;  // 가로(열)
  
char maze[105][105];    // 미로
int visited[105][105];  // BFS를 통해 저장한 각 점에서 최단 경로의 길이
  
int sa = 0, sb = 0;
int ga = 0, gb = 0;
  
POINT around[4] = { {1,0},{-1,0},{0,1},{0,-1} };
void input() {
    scanf("%d", &h);
    scanf("%d", &w);
      
    for (int i = 0; i < h; i++) {
            scanf("%s", maze[i]);
    }
  
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            maze[i][j] -= 48;
            //printf("%d", maze[i][j]);
        }
        //printf("\n");
    }
}
bool safe(int x, int y) {
    // 미로 배열의 내부에 있는지 검사한다.
    if (x >= 0 && x < h&&y >= 0 && y < w)
        return true;
    else
        return false;
}
void solve() {
    queue<POINT> q;
    POINT cur;
    sa = 0;
    sb = 0;
    ga = h - 1;
    gb = w - 1;
    q.push({ sa,sb });
    visited[sa][sb] = 1;                    // 시작지점에서의 경로 0
    visited[ga][gb] = -1;               
  
    while (!q.empty()) {                    // 큐가 빌 때 까지
        cur = q.front(); q.pop();
        if (cur.a == ga && cur.b == gb)     // 도착점에 도달하면
        {
            break;
        }
        for (int i = 0; i < 4; i++) {        // 현재 지점에서 동서남북 탐색(bfs)
            int x = cur.a + around[i].a;    // 탐색 지점 x (row)
            int y = cur.b + around[i].b;    // 탐색 지점 y (col)
        
            if (visited[x][y] <= 0 && maze[x][y] == 1&&safe(x, y)) {                 
                q.push({ x,y });                            // 큐에 삽입한다.
                visited[x][y] = visited[cur.a][cur.b] + 1;  // 방문한 지점까지의 경로의 길이
            }       
        }
    }
}
void output() {
  
    printf("%d", visited[ga][gb]);
}
int main() {
    input();
    solve();
    output();
}
