#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;

map<long long, int> m;

int main() {

	int tc;
	cin >> tc;
	pair<long long, int> p;
	long long n;

	for (int i = 0; i < tc; i++) {
		cin >> n;
		p.first = n;
		p.second = 1;
		if(!m.insert(p).second){
			m.find(n)->second++;
		}
	}
	
	map<long long, int>::iterator it = m.begin();
	long long f = 0;;
	int s = -1;
	for ( it=m.begin(); it != m.end(); it++) {
		if (it->second > s){
			f = it->first;
			s = it->second;
		}
	}	

	printf("%lld\n",f);

	return 0;
}