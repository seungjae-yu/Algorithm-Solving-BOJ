#include <iostream>
using namespace std;

float arr[5] = { 350.34,230.90,190.55,125.30,180.90 };
int cnt[5];
float ans;

int tc;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		ans = 0;
		for (int i = 0; i < 5; i++){
			scanf("%d", &cnt[i]);
			ans += arr[i] * cnt[i];
		}
		printf("$%.2f\n", ans);
	}
}