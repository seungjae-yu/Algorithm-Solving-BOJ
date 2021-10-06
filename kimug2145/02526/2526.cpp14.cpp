#include<iostream>
using namespace std;

int n, p, idx, tmp;
int arr[100];

int main() {
	scanf("%d %d", &n, &p);

	arr[idx++] = n;
	tmp = n;

	while (true) {
		tmp = (tmp*n) % p;
		for (int i = 0; i < idx; i++)
			if (arr[i] == tmp){
				printf("%d\n", idx - i);
				exit(0);
			}
		arr[idx++] = tmp;
	}	
}