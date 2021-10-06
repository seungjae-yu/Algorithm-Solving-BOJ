#include <iostream>
#include <string>
#include <deque>
using namespace std;

int tc, n;
string p, inp;

int main() {

	int tc;

	scanf("%d", &tc);

	while (tc--) {
		deque<int> dq;

		cin >> p;
		scanf("%d", &n);
		cin >> inp;

		bool ex = false;

		if (n == 0) {
			for (int i = 0; i < p.size(); i++) {
				if (p[i] == 'D') {
					cout << "error\n";
					ex = true;
					break;
				}
			}
		}

		if (ex) continue;

		if(n == 0 && ex == false){
			printf("[]\n");
			continue;
		}

		string tmp = "";
		for (int i = 1; i < inp.size(); i++) {
			if (inp[i] != ',' && inp[i] != ']') tmp += inp[i];
			else { dq.push_back(stoi(tmp)); tmp = ""; }
		}

		bool rev = false;

		for (int i = 0; i < p.size(); i++) {

			if (p[i] == 'R') rev = !rev;

			else if (p[i] == 'D') {

				if (dq.empty()) {
					printf("error\n");
					ex = true;
					break;
				}

				if (rev == true) {
					dq.pop_back();
				}

				else if (rev == false) {
					dq.pop_front();
				}
			}
		}

		if (ex) continue;

		if (dq.empty()){
			printf("[]\n");
			continue;
		}

		if (rev == false) {
			printf("[");
			for (int i = 0; i < dq.size() - 1; i++)
				printf("%d,", dq[i]);
			printf("%d]\n", dq[dq.size() - 1]);
		}

		else {
			printf("[");
			for (int i = dq.size() - 1; i > 0; i--)
				printf("%d,", dq[i]);
			printf("%d]\n", dq[0]);
		}
	}
}