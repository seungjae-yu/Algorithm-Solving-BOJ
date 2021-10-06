#include <map>
#include <stdio.h>
using namespace std;

map<long long, int> m;

int main() {

	int tc;
	scanf("%d", &tc);
	pair<long long, int> p;
	long long n;

	for (int i = 0; i < tc; i++) {
		scanf("%lld", &n);
		p.first = n;
		p.second = 1;
		if(!m.insert(p).second){
			m.find(n)->second++;
		}
	}	
	long long f = 0;;
	int s = -1;
	for (map<long long, int>::iterator it = m.begin(); it != m.end(); it++) {
		if (it->second > s){
			f = it->first;
			s = it->second;
		}
	}	

	printf("%lld\n",f);

	return 0;
}