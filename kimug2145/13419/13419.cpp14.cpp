#include <iostream>
#include <string>
using namespace std;

int tc;
int main() {

	scanf("%d", &tc);
	string inp;
	while (tc--) {
		
		cin >> inp;
		
		int sz = inp.size();

		if (sz == 1) {
			cout << inp << "\n" << inp << "\n";
			continue;
		}

		if (sz > 20) sz -= 10;

		for (int i = 0; i < sz-1; i++)
			inp += inp;
		
		string A = "";
		string B = "";
		int ssz = 0;
		for (int i = 0; i < inp.size(); i++) {
			if (i % 2 == 0) A += inp[i];
			else B += inp[i];
			string haf1 = "", haf2 = "";

			for (int j = 0; j < A.size() / 2; j++)
				haf1 += A[j];

			for (int j = A.size() / 2; j < A.size(); j++)
				haf2 += A[j];

			if (haf1 == haf2) {
				cout << haf1 << "\n";
				ssz = haf1.size();
				break;
			}
		}

		for (int i = 0; i < ssz; i++)
			cout << B[i];
		cout << "\n";
	}
}