#include <iostream>
using namespace std;
int n;
int main() {
	scanf("%d", &n);	
	cout << char((n + 8) % 12 + 'A') << (n + 6) % 10 << "\n";
}