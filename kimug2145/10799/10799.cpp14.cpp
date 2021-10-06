#include <iostream>
#include <stack>
#include <string>
using namespace std;

string inp;
stack <char> s;
int cnt = 0;

int main() {
	cin >> inp;
	
	for (int i = 0; i < inp.length(); i++) {
		if (inp[i] == '(') s.push('(');
		else {	
			if (!s.empty()) s.pop();			
			if (inp[i - 1] == '(') cnt += s.size();
			else cnt++;
		}
	}
	cout << cnt;
}