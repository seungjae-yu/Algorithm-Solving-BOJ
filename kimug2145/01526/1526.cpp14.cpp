#include <iostream>
using namespace std;
int N;

bool isMinSu(int a) {
	
	bool ret;

	while (a != 0) {

		if (a <= 10) {
			if (a % 10 == 7 || a % 10 == 4) {
				ret = true;
				break;
			}

			else {
				ret = false;
				break;
			}
		}
		
		if (a % 10 == 7 || a % 10 == 4) {
			a = a / 10;
			ret = true;
			continue;
		}

		else {
			ret = false;
			break;
		}
	}
	return ret;
}

int main() {
	scanf("%d", &N);	
	while ( N >= 0 ) {
		if (isMinSu(N)) {
			cout << N << "\n";
			break;
		}
		else N--;		
	}
}