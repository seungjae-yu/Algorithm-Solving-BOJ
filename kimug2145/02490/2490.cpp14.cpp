#include <iostream>
char Y[5] = { 'E','A','B','C','D' };
int main() {	
	int a, b, c, d;
	while (std::cin >> a >> b >> c >> d) {
		int sum = !a + !b + !c + !d;			
		std::cout << Y[sum] << "\n";
	}	
}