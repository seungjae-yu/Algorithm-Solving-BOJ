#include <iostream>
#include <algorithm>
using namespace std;

int N, M, k;
int fi[42];
int len[50], l_idx = 0;
bool chk[42];

int main() {

	scanf("%d %d", &N, &M);
	
	fi[0] = 1;
	fi[1] = 1;
	fi[2] = 2;
	fi[3] = 3;

	for (int i = 4; i <= 41; i++) {
		fi[i] = fi[i - 1] + fi[i - 2];
	}

	for (int i = 0; i < M; i++) {
		scanf("%d", &k);
		chk[k] = true;
	}

	int l = 0;

	for (int i = 1; i <= N; i++) {

		if (chk[i] == false) l++;
		else {
			len[l_idx++] = l;
			l = 0;
		}
	}

	len[l_idx++] = l;

	int ans = 1;
	for (int i = 0; i < l_idx; i++) {
		ans = ans * fi[len[i]];		
	}
	cout << ans;

}