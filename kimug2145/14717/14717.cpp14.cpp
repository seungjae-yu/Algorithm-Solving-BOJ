#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b, arr[22], n[11], cnt;
vector<int> v;

int main() {
	scanf("%d %d", &a, &b);

	for (int i = 1; i <= 10; i++) n[i] = 2;
	n[a]--;
	n[b]--;

	for (int i = 1; i <= 10; i++)
		for (int j = 0; j < n[i]; j++)
			v.push_back(i);		
	
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (a == b) {
				if (v[i] != v[j]) cnt++;
				else if (v[i] == v[j] && a > v[i]) cnt++;
			}
			else {
				if (v[i] != v[j]) {
					if ((a + b) % 10 > (v[i] + v[j]) % 10) cnt++;
				}
			}
		}
	}
	printf("%.3f\n", (double)(cnt) / 153);
}