#include <iostream>
using namespace std;

//플로이드 워셜
int N;
int arr[101][101];
#define INF 987654321

int main() {

	scanf("%d", &N);
		
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			scanf("%d", &arr[i][j]);
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			if(arr[i][j] == 0 ) arr[i][j] = INF;
	}
	
	for (int k = 0; k < N; k++) { //경유지
		for (int i = 0; i < N; i++) { //출발지
			for (int j = 0; j < N; j++) { //도착지
				if (arr[i][j] > arr[i][k] + arr[k][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
	}	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] != INF) 			
			printf("1");
			else printf("0");

			if (i != N) printf(" ");
		}
		printf("\n");
	}
}