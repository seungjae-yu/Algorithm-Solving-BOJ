#include <iostream>
int n, w, h, x;

int main() {
	scanf("%d %d %d", &n, &w, &h);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		printf(x*x > w*w + h*h ? "NE\n" : "DA\n");
	}
}