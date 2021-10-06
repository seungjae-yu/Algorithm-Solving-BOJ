#include <iostream>
int main() {
	int a;
	scanf("%d",&a);
	int i = 2;
	while (a != 1)
	{
		if (a%i == 0) {
			std::cout << i <<"\n";
			a = a / i;
			i = 2;
		}
		else i++;
	}
}