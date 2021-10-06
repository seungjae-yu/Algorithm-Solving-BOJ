#include <iostream>
#include <string>
using namespace std;
bool arr[10002];
int main() {
	string tmp;
	
	for (int i = 1; i <= 10000; i++) {
		int now = 0;
		tmp = to_string(i);
		for (int j = 0; j < tmp.length(); j++) {
			now += tmp[j] - '0';
		}
		arr[now + stoi(tmp)] = true;
	}

	for (int i = 1; i <= 10000; i++) {
		if (!arr[i]) printf("%d\n", i);
	}
}