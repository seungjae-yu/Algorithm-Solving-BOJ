#include<cstdio>
#include<algorithm>
using namespace std;
#define dis(u,v) ((x[u]-x[v])*(x[u]-x[v])+(y[u]-y[v])*(y[u]-y[v]))
int n, pfx, sfx[5000], a[5000], s, e, x[5000], y[5000];
double res = 1e9;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d%d", &x[i], &y[i]), a[i] = i;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (dis(s, e) < dis(i, j)) s = i, e = j;
    sort(a, a + n, [](int u, int v) {return dis(s, u) < dis(s, v); });
    for (int i = n - 1; i--;) {
        sfx[i] = sfx[i + 1];
        for (int j = n; --j > i;) sfx[i] = max(sfx[i], dis(a[i], a[j]));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) pfx = max(pfx, dis(a[i - 1], a[j]));
        res = min(res, sqrt(pfx) + sqrt(sfx[i]));
    }
    printf("%lf", res);
    return 0;
}