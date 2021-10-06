#include <iostream>
#include <map>
using namespace std;

int n, a, b, c, sa, sb, sc;
map<int, int> m[3];

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		m[0][a]++, m[1][b]++, m[2][c]++;
		sa += a, sb += b, sc += c;
	}

	if (sa > sb && sa > sc) cout << 1 << " " << sa;
	else if (sb > sa && sb > sc) cout << 2 << " " << sb;
	else if (sc > sa && sc > sb) cout << 3 << " " << sc;

	if (sa == sb && sa > sc) {
		//a,b
		if (m[0][3] > m[1][3]) cout << 1 << " " << sa;
		else if (m[0][3] < m[1][3]) cout << 2 << " " << sb;
		
		else if(m[0][3] == m[1][3]){
			if (m[0][2] > m[1][2]) cout << 1 << " " << sa;
			else if (m[0][2] < m[1][2]) cout << 2 << " " << sb;
			else cout << 0 << " " << sa;
		}
	}

	else if (sa == sc && sa > sb) {
		//a,c
		if (m[0][3] > m[2][3]) cout << 1 << " " << sa;
		else if (m[0][3] < m[2][3]) cout << 3 << " " << sc;

		else if (m[0][3] == m[2][3]) {
			if (m[0][2] > m[2][2]) cout << 1 << " " << sa;
			else if (m[0][2] < m[2][2]) cout << 3 << " " << sc;
			else cout << 0 << " " << sa;
		}
	}

	else if (sb == sc && sb > sa) {
		if (m[1][3] > m[2][3]) cout << 2 << " " << sb;
		else if (m[1][3] < m[2][3]) cout << 3 << " " << sc;

		else if (m[1][3] == m[2][3]) {
			if (m[1][2] > m[2][2]) cout << 2 << " " << sb;
			else if (m[1][2] < m[2][2]) cout << 3 << " " << sc;
			else cout << 0 << " " << sb;
		}
	}

	else if (sa == sb && sb == sc) {

		if (m[0][3] > m[1][3] && m[0][3] > m[2][3]) cout << 1 << " " << sa;
		else if (m[1][3] > m[0][3] && m[1][3] > m[2][3]) cout << 2 << " " << sb;
		else if (m[2][3] > m[1][3] && m[2][3] > m[0][3]) cout << 3 << " " << sc;

		if (m[0][3] == m[1][3] && m[1][3] == m[2][3]) {
			if (m[0][2] > m[1][2] && m[0][2] > m[2][2]) cout << 1 << " " << sa;
			else if (m[1][2] > m[0][2] && m[1][2] > m[2][2]) cout << 2 << " " << sa;
			else if (m[2][2] > m[0][2] && m[2][2] > m[1][2]) cout << 3 << " " << sa;
			else if (m[0][2] == m[1][2] && m[1][2] == m[2][2]) cout << 0 << " " << sa;
		}

	}
}