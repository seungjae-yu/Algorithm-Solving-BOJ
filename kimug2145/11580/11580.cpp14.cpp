#include <iostream>
#include <set>
using namespace std;
typedef pair<int, int>p;

set<p> s;
char inst[1001];
int L, x, y;

int main() {

	x = y = 0;
	scanf("%d", &L);
	
	cin >> inst;

	s.insert(make_pair(0, 0));

	for (int i = 0; i < L; i++) {

		if (inst[i] == 'N') {
			y++;
			s.insert(make_pair(x, y));
		}

		else if (inst[i] == 'S') {
			y--;
			s.insert(make_pair(x, y));
		}

		else if (inst[i] == 'W') {
			x--;
			s.insert(make_pair(x, y));
		}

		else if (inst[i] == 'E') {
			x++;
			s.insert(make_pair(x, y));
		}
	}
	printf("%d\n", s.size());
}