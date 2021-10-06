#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int cnum;
int m, n;
int sum;
int cnt;
bool cmp(int a,int b)
{
	return a > b;
}

int arr[1500];

int main()
{
	scanf("%d", &cnum);
	scanf("%d %d", &m, &n);
	for (int i = 0; i < cnum; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr,arr+cnum,cmp);

	for (int i = 0; i < cnum; i++)
	{
		sum += arr[i];
		if (sum >= m*n)
		{
			cnt =i+1;
			break;
		}
	}

	if (cnt != 0)
	{
		cout << cnt << '\n';
	}
	else
	{
		cout << "STRESS\n";
	}
	return 0;
}