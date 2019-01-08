#include<stdio.h>
#include<math.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>
#include"Head.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_DEPRECATE

int setup_an_int() {
	int N, choice;
	scanf("%d", &N);

	
	return N;
}

void zhiheshu(int n) {
	int i, j, k = 0;
	if (n > 1) {
		for (i = 2; i < n; i++) {
			j = n % i;
			if (j == 0) {
				k = 0;
				break;
			}
		}
		if (i >= n)k = 1;
	}
	if (k == 1 && n > 1) printf(" %d 是素数（质数）.\n", n);
	else if (k == 0 && n > 1) printf(" %d 是合数.\n", n);
	else printf(" %d 既不是质数，也不是合数.\n", n);
}