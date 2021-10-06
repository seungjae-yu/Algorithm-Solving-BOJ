#include <iostream>
#include <string>
using namespace std;

int N, F;

int main() {
	scanf("%d %d", &N, &F);

	string inp = to_string(N);

	if (inp.size() == 1) {		
		printf("0%d", F);
		exit(0);
	}

	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			string tmp = inp;
			tmp[tmp.length() - 2] = i + '0';
			tmp[tmp.length() - 1] = j + '0';
			if (stoi(tmp) % F == 0) {
				printf("%d%d", i, j);
				exit(0);
			}
		}
	}
}