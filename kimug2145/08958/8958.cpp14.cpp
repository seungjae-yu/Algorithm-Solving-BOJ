#include <iostream>

using namespace std;

int tc;
char c[82];
int cnt;
int t;
int main() {

	scanf("%d", &tc);
	while (tc--) {
		cnt = 0;
		t = 0;
		scanf("%s", &c);

		for (int i = 0; c[i] != NULL; i++) {
			if (c[i] == 'O'){
				t++;
				cnt += t;
			}

			else if (c[i] == 'X'){				
				t = 0;
			}					
		}	

		printf("%d\n",cnt);

	}

}