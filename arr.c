#include<stdio.h>
#include<math.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>
#include"Head.h"

#pragma warning(disable:4996)
//#define _CRT_SECURE_NO_DEPRECATE
#define arr_max 99999

//tips:
//float arr[arr_max], *p = arr;

int i = 0, j = 0, cnt = 0, choice = 0;//全局变量，随意使用，使用前请先初始化。

void arr_main(){
	float arr[arr_max], *p = arr;
	float copy[arr_max], *q = copy;
	float arsum;
	int arlen = fscan_arr(p), armaxi, armini;

	q = sequence_MaxMin(q, p, arlen);
	printfArr(q, arlen);
	printfArr(p, arlen);
	arsum = sum_arr(p, arlen);
	armaxi = find_max_i(p, arlen);
	armini = find_min_i(p, arlen);
	printfArr_sum_maxi_mini(p, arsum, armaxi, armini);
}

void exchange_both_float(float *a, float *b) {
	float temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

float* copy_arr(float *new, float *old, int len) {
	/*for (i -= i; i < len; i++)
		*(new + i) = *(old + i);*/
	memcpy((void*) new, (void*)old, len*sizeof(float));
	printf("*p_copy= %p\n", new);
	return new;
}

float* sequence_MaxMin(float *q,float*p,int len) {
	while (getchar(), getchar() != '\n');
	q = copy_arr(q, p, len);
	printf("From Max to Min,input 1.\nFrom Min to Max,input 0.\nNothing to do,input other numbers.\nNum = "); scanf("%d", &choice);
	
	for (j -= j; j < len - 1; j++) {
		for (i -= i; i < len - j - 1; i++) {
			if (choice == 1)
				*(q + i) < *(q + i + 1) ? exchange_both_float(q + i, q + i + 1) : 0;
			if (choice == 0)
				*(q + i) > *(q + i + 1) ? exchange_both_float(q + i, q + i + 1) : 0;
		}
	}
	return q;
}

int fscan_arr(float* p) {
	int len;
	printf("Please input the range of the arr: ");
	scanf("%d", &len);
	printf("Input all the number: ");

	for (i-=i; i < len; i++)
		scanf("%f", p + i);

	return len;
}

float sum_arr(float* p,int len) {
	float sum_arr = 0;

	for (i-=i; i < len; i++)
		sum_arr += *(p + i);

	return sum_arr;
}

int find_max_i(float* p, int len) {
	int down_num = 0, temp=0;

	for (i-=i; i < len; i++)
		*(p + temp) < *(p + i) ? temp = i : temp;

	return temp;
}

int find_min_i(float* p, int len) {
	int down_num = 0, temp = 0;

	for (i-=i; i < len; i++)
		*(p + temp) > *(p + i) ? temp = i : temp;

	return temp;
}

void printfArr(float *p,int len) {
	for (i -= i; i < len; i++)
		printf(" arr[%d] = %f\n", i, *(p + i));
	putchar('\n');
}

void printfArr_sum_maxi_mini(float *p,float sum, int xi, int ii) {
	printf("\nsum = %f\n", sum);
	if (xi <= arr_max)
		printf("max: arr[%d] = %f\n", xi,*(p+xi));
	if (ii <= arr_max)
		printf("min: arr[%d] = %f\n", ii,*(p+ii));
}