#include <iostream>
int a, s;
int main() {	
	for (int i = 0; i < 5; i++) std::cin >> a, s += a*a;
	std::cout << s % 10;	
}