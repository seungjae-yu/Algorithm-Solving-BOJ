#include <iostream>
int a, b, ans, now;
int main() {
	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &a, &b);
		now += b - a;		
		ans = now > ans ? now : ans;
	}
    std::cout<<ans;
}