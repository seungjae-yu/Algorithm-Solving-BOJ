#include <iostream>
using namespace std;
int tc;

int miss;
char r[81];

int main() {

	scanf("%d", &tc);
	while (tc--) {
				
		scanf("%d %s", &miss, &r);

		int idx = 0;
		while (r[idx] != NULL) {

			if (idx == miss - 1) {

			}
			else{
				printf("%c", r[idx]);			
			}
			idx++;
		}
		printf("\n");
	}
}