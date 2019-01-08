#include<stdio.h>
#include<math.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>
#include"Head.h"

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_DEPRECATE
#define cMax 99999
#define one 1
#define two 2


void printfstar() {
	int dis, sum, line;
	int i, j, sumT;
	int H, po, space = 0, count_cr, count_crmax;
	char cr;

	printf("\nWelcome to use \"Printfstar\" program!\n");
	printf("~char: "); getchar(),cr = getchar();
	printf("~distance: "); scanf("%d", &dis);
	printf("~line (If unknown, input 0.): "); scanf("%d", &line); sum = 0;
	if (line == 0) { printf("~sum: "); scanf("%d", &sum); }

	if (dis <= 0)printf("Error!\n");
	if (line % 2 == 0 && line > 1)line--;
	if (sum != 0 && line == 0) {
		for (line = 1;; line += 2) {
			po = (line + 1) / 2;
			count_crmax = 1 + (po - 1)*dis;
			sumT = (count_crmax + 1)*po - count_crmax;
			if (sumT > sum)break;
		}
		sum = 0; line -= 2;
	}
	if (sum == 0 && line % 2 != 0 && dis % 2 == 0) {
		po = (line + 1) / 2;
		count_crmax = 1 + (po - 1)*dis;
		for (H = 1; H <= po; H++) {
			count_cr = 1 + (H - 1)*dis;
			space = (count_crmax - count_cr) / 2;
			for (i = 1; i <= space; i++)
				printf(" ");
			for (j = 1; j < count_cr; j++)
			{
				printf("%c", cr); sum++;
			}
			if (j == count_cr)
			{
				printf("%c\n", cr); sum++;
			}
		}
		for (H = line - po; H >= 1; H--) {
			count_cr = 1 + (H - 1)*dis;
			space = (count_crmax - count_cr) / 2;
			for (i = 1; i <= space; i++)
				printf(" ");
			for (j = 1; j < count_cr; j++)
			{
				printf("%c", cr); sum++;
			}
			if (j == count_cr)
			{
				printf("%c\n", cr); sum++;
			}
		}
		printf("line= %d, sum= %d.\n", line, sum);
	}
	else if (sum == 0 && line % 2 != 0 && dis % 2 != 0) {
		po = (line + 1) / 2;
		count_crmax = 1 + (po - 1)*dis;
		for (H = 1; H <= po; H++) {
			count_cr = 1 + (H - 1)*dis;
			space = (po - H) * dis;
			for (i = 1; i <= space; i++)
				printf(" ");
			for (j = 1; j < count_cr; j++)
			{
				printf("%c ", cr); sum++;
			}
			if (j == count_cr)
			{
				printf("%c\n", cr); sum++;
			}
		}
		for (H = line - po; H >= 1; H--) {
			count_cr = 1 + (H - 1)*dis;
			space = (po - H) * dis;
			for (i = 1; i <= space; i++)
				printf(" ");
			for (j = 1; j < count_cr; j++)
			{
				printf("%c ", cr); sum++;
			}
			if (j == count_cr)
			{
				printf("%c\n", cr); sum++;
			}
		}
		printf("line= %d, sum= %d.\n", line, sum);
	}
	else printf("Error!\n");
}

void char_setup() {
	int n;
	printf("How many char_array do you have?"); scanf("%d", &n);

	int len1;
	printf("Input a range1:(No matter how big it is.):");
	scanf("%d\n", &len1);
	char *setup = (char*)malloc(len1 + one), *p = setup, *pg = NULL;
	gets_s(p,len1);
	
	if (n ==one)goto SKIP;

	int len2;
	printf("Input a range2:(No matter how big it is.):");
	scanf("%d\n", &len2);
	char *possess = (char*)malloc(len2 + one); pg = possess;
	gets_s(pg,len2);
	
SKIP:
	if (n == two) {
		strcmp_output(len1 = strcmp(p, pg));
	}

	free(pg);
	free(p);
}

void strcmp_output(int n) {
	if (n > 0)printf("The first one is bigger.%d\n", n);
	else if (n < 0)printf("The second one is bigger.%d\n", n);
	else printf("They are the same.\n");
}