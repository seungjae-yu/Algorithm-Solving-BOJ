#include <iostream>
int inp[5];

int main()
{
	for (int i = 0; i < 5; ++i)scanf("%d", &inp[i]);

	for (int i = 1; i < 5; ++i) {
		for (int j = 1; j < 5; ++j) {
			if (inp[j - 1] > inp[j]) {
				std::swap(inp[j - 1], inp[j]);
				for (int k = 0; k < 5; ++k)printf("%d ", inp[k]);
				printf("\n");
			}
		}
	}
}