#include <iostream>
using namespace std;

double x[4], y[4];

int main() {
	for (int i = 0; i < 4; i++)
		cin >> x[i] >> y[i];
	double d = (y[3] - y[2]) * (x[1] - x[0]) - (x[3] - x[2]) * (y[1] - y[0]);
	if (d == 0) printf("0");
	else {
		double c1 = ((x[3] - x[2])*(y[0] - y[2]) - (y[3] - y[2])*(x[0] - x[2])) / d;
		double c2 = ((x[1] - x[0])*(y[0] - y[2]) - (y[1] - y[0])*(x[0] - x[2])) / d;		
		if (c1 > 0 && c1 < 1 && c2 > 0 && c2 < 1) printf("1");
		else printf("0");
	}
}