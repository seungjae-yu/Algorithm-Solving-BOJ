#include <iostream>
#include <string>
using namespace std;
int x, y;
int arr[13] = { 0,3,0,3,2,3,2,3,3,2,3,2,3 };
string d[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
int main() {
	scanf("%d %d", &x, &y);
	int tmp = 0;
	for (int i = 0; i < x; i++) tmp += arr[i];
	tmp += y;
	cout << d[(tmp - 1) % 7];
}