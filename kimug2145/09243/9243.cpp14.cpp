#include <iostream>
#include <string>
using namespace std;

int n;
string a, b;
int main() {
	scanf("%d", &n);
	cin >> a >> b;

	if (n % 2 == 0) {
		if (a == b) cout << "Deletion succeeded\n";
		else cout << "Deletion failed\n";
	}

	else {
		if (a == b) {
			cout << "Deletion failed\n";
			exit(0);
		}

		else {
			for (int i = 0; i < a.length(); i++) {
				if (a[i] == b[i]) {
					cout << "Deletion failed\n";
					exit(0);
				}
			}
			cout<< "Deletion succeeded\n";
		}
	}
}