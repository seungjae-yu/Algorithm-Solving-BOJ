#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int tc, N;

int main() {

	scanf("%d", &tc);
	string inpp, anss;
	while (tc--) {
	
		scanf("%d", &N);
		
		cin >> inpp >> anss;
		
		int d_cnt = 0;
		int my_cnt = 0;

		for (int i = 0; i < inpp.size(); i++) {
			if (inpp[i] != anss[i]) {
				d_cnt++;
				if (inpp[i] == 'W') my_cnt++;		
			}
		}
		int sz = inpp.size();
		printf("%d\n", min(d_cnt, max(my_cnt , d_cnt - my_cnt)));
	}
}