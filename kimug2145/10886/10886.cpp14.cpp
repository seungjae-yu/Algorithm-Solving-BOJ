#include<cstdio>
int n, x, r;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &x), r += x;
    puts(2 * r>n ? "Junhee is cute!" : "Junhee is not cute!");   
}