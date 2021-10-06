#include <iostream>
#include <string>
using namespace std;

char inp[16][16];

int main() {

	for (int i = 0; i < 5; i++) cin >> inp[i];

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			char tmp = inp[j][i];
			if ((tmp >= '0' && tmp <= '9') || (tmp >= 'A' && tmp <= 'Z') || (tmp >= 'a' && tmp <= 'z')) cout << tmp;
		}
	}

}