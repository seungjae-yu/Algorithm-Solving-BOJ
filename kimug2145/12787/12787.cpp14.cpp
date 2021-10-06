#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

typedef unsigned long long ll;
int tc, type;
#define CV 256

int main() {
	scanf("%d", &tc);

	while (tc--) {
		scanf("%d", &type);
		if (type == 1) {
			//ip -> ll
			string inp;
			cin >> inp;
			string tmp = "";
			ll arr[10] = { 0, };
			int idx = 0;
			for (int i = 0; i < inp.size(); i++) {
				if (inp[i] != '.') tmp += inp[i];
				else { arr[idx++] = stoi(tmp), tmp = ""; }
			}
			arr[idx] = stoi(tmp);

			ll ans = 0;
			for (int i = 0; i < 8; i++) {
				ans += arr[i] * (ll)pow(CV, 7 - i);				
			}
			cout << ans << "\n";
		}

		if (type == 2) {
			//ll ->ip
			ll inp;
			cin >> inp;
			ll pp = 0;
			ll arr[10] = { 0, };
			while (true) {
				if (inp >= pow(CV, pp)) pp++;
				else break;
			}
			pp--;
			int idx = 7;
			while (inp) {
				ll tmp = inp / pow(CV, pp);
				arr[idx - pp] = tmp;
				inp = inp - tmp * (ll)pow(CV, pp);
				pp--;
			}
			for (int i = 0; i < 7; i++)
				cout << arr[i] << ".";
			cout << arr[7] << "\n";
		}
	}
}