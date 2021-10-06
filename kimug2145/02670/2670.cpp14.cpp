#include <iostream>
#include <algorithm>
using namespace std;

double inp[10005], ans;

int n;
int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) scanf("%lf", &inp[i]);
	
	for (int i = 0; i < n; i++) {
		double tmp = 1;
		for (int j = i; j < n; j++) {		
			tmp *= inp[j];			
			ans = max(tmp, ans);
		}		
	}
	printf("%.3f", ans);
}