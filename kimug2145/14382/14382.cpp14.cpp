#include <iostream>
#include <string>
using namespace std;

int tc, val;
string inp;

int main() {
	scanf("%d", &tc);

	for (int i = 1; i <= tc; i++) {
		bool chk[10] = { 0, };
		scanf("%d", &val);
		printf("Case #%d: ",i);
		
		if (val == 0) { printf("INSOMNIA\n"); continue; }		
		inp = to_string(val);

		int rnd = 1;
		while (true) {			
			for (int j = 0; j < inp.length(); j++) chk[inp[j]-'0'] = true;

			int cc = 0;
			for (int k = 0; k < 10; k++) if(chk[k]) cc++;

			if (cc == 10) break;
			rnd++;
			int tmp = val*rnd;
			inp = to_string(tmp);			
		}
		cout << inp << "\n";
	}
}