#include<cstdio>
#include<algorithm>
#define x first
#define y second
#define dis(a,b) 1LL*(a.x-b.x)*(a.x-b.x)+1LL*(a.y-b.y)*(a.y-b.y)
using namespace std;
const int MXN = 2e5;
int t, n;
typedef struct pair<int, int> point;
point p[MXN], ch[MXN], ra, rb;
long long ccw(point a, point b, point c) {
    return 1LL * (b.x - a.x)*(c.y - a.y) - 1LL * (c.x - a.x)*(b.y - a.y);
}
void f() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d %d", &p[i].x, &p[i].y);
    swap(p[0], *min_element(p, p + n));
    sort(p + 1, p + n, [](point l, point r) {
        long long c = ccw(p[0], l, r);
        return c > 0 || !c && l<r;
    });
    int sz = 0;
    for (int i = 0; i < n; i++) {
        while (sz > 1 && ccw(ch[sz - 2], ch[sz - 1], p[i]) <= 0) sz--;
        ch[sz++] = p[i];
    }
    long long maxi = 0;
    for (int i = 0, j = 1; i < sz; i++) {
        while (ccw(ch[i], ch[(i + 1) % sz], { ch[i].x + ch[(j + 1) % sz].x - ch[j].x, ch[i].y + ch[(j + 1) % sz].y - ch[j].y }) > 0) j = (j + 1) % sz;
        if (maxi < dis(ch[i], ch[j])) {
            maxi = dis(ch[i], ch[j]);
            ra = ch[i];
            rb = ch[j];
        }
    }
    printf("%d %d %d %d\n", ra.x, ra.y, rb.x, rb.y);
}
int main() {
    for (scanf("%d", &t); t--;) f();
    return 0;
}