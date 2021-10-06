#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N;
long long dp[95][2];
//n , prev 

long long func(int n, int prev) {

	//1. 탈출조건
	if (n > N) return 0;
	if (n == N) return 1;
	
	//2. 초기화
	long long& ret = dp[n][prev];
	if (ret != -1) return ret;
	ret = 0;
	
	//3. 실행
	//prev == 1 다음은 무조건 0
	//prev == 0 다음은 0,1

	if (prev == 0) {
		ret += func(n + 1, 1);
		ret += func(n + 1, 0);
	}

	else if(prev == 1){
		ret += func(n + 1, 0);
	}	

	return ret;
}


int main() {

	cin >> N;
	memset(dp, -1, sizeof(dp));
	cout << func(1, 1) << "\n";
}