#include <iostream>
#include <string.h>
using namespace std;

char inp[100002];
int pi[100002];
char f[11];
int n, m, cnt;

void kmp(char *pat) {
	int n = strlen(pat);
	int i = -1, j = 0;
	pi[j] = i;
	while (j < n) {
		if (i == -1 || (i >= 0 && pat[i] == pat[j])) {
			i++;
			j++;
			pi[j] = i;
		}
		else i = pi[i];
	}
}

void find_pattern(char *arr, char *pat) {
	int n = strlen(arr);
	int m = strlen(pat);
	int i = 0, j = 0;
	while (i < n) {
		if (j == -1 || (j >= 0 && arr[i] == pat[j])) i++, j++;
		else if (arr[i] != pat[j]) j = pi[j];
		if (j == m) {
			cnt++;
			j = pi[j];
		}
	}
}

int main() {
	scanf("%s %s", &inp, &f);
	n = strlen(inp);
	m = strlen(f);
	kmp(f);
	find_pattern(inp, f);
	printf("%d", cnt);
}