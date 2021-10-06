#include <iostream>
#include <string>
using namespace std;

string a, b;
char oper;

int main() {

	cin >> a >> oper >> b;

	if (oper == '+') {
		int aa = a.length();
		int bb = b.length();

		if (aa == bb) {
			printf("2");
			for (int i = 0; i < a.length() - 1; i++)printf("0");
			printf("\n");
		}
		else {
			int st = (aa > bb ? aa : bb);

			for (int i = st; i >= 1; i--) {
				if (i == aa || i == bb) printf("1");
				else printf("0");
			}
			printf("\n");
		}
	}

	else {
		printf("1");
		for (int i = 0; i < a.length() + b.length() - 2; i++)printf("0");
		printf("\n");
	}
}