#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;

#define N 4000002
int arr[N];
int res, sum, lo, hi;
vector<int>  v;
int main() {

	for (int i = 2; i <= N; i++) arr[i] = i;

	for (int i = 2; i <= sqrt(N); i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= N; j += i) {
			arr[j] = 0;
		}
	}
	int inp;

	scanf("%d", &inp);

	for (int i = 2; i <= inp; i++) {
		if (arr[i] == i) v.push_back(i);
	}

	while (true) {
		if (sum >= inp) sum -= v[lo++];
		else if (hi == v.size())break;		
		else sum += v[hi++];
		if (sum == inp) res++;		
	}
	
	printf("%d\n", res);	
}