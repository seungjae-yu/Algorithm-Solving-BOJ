#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int inp, tc;

vector<int> v;

int main() {
	scanf("%d", &tc);
	while (tc--) {
		map<int, int>m;
		for (int i = 0; i < 3; i++) {
			scanf("%d", &inp);
			m[-inp]++;
		}

		if (m.size() == 3)  v.push_back((-100)*(*m.begin()).first);

		else if (m.size() == 2) {
			for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
				if (it->second == 2) v.push_back(1000 + (-100)*it->first);
		}

		else if (m.size() == 1) v.push_back(10000 + (-1000)* (*m.begin()).first);
	}

	cout << *max_element(v.begin(), v.end()) << "\n";
}