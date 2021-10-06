#include <iostream>
#include <map>
using namespace std;

int inp;
map<int, int>m;

int main() {

	for (int i = 0; i < 3; i++) {
		scanf("%d", &inp);
		m[-inp]++;
	}

	if (m.size() == 3) printf("%d\n", (-100)*(*m.begin()).first);


	else if (m.size() == 2) {
		for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
			if (it->second == 2) printf("%d\n", 1000 + (-100)*it->first);
	}

	else if (m.size() == 1) printf("%d\n", 10000 + (-1000)* (*m.begin()).first);
}