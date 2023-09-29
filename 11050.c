#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, k = 0;
	scanf("%d %d", &n, &k);
	int answer = 1;
	int N = n;
	int K = k;
	for (int i = 0; i < k; i++) {
		answer *= N;
		N--;
	}
	if (k != 0) {
		for (int i = 0; i < k; i++) {
			answer /= K;
			K--;
		}
	}
	else {
		answer = 1;
	}
	printf("%d", answer);
	return 0;
}