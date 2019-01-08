//
//  main.c
//  california1
//
//  Created by california on 2018/11/24.
//  Copyright © 2018年 california. All rights reserved.
//
#include<stdio.h>
#include<math.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)

//函数申明列表：
int Hello(void);
int interface_main_1(void);
int interface_int_1(void);
int interface_arr_2(void);
int interface_char_3(void);
int interface_Matrix_4(void);
int interface_main_1_choice_switch(int Q);
int Callatz(int N);
int daozhi(int n);
void zhiheshu(int n);
void shuixianhuashu(int n);
void wanquanshu(int n);
void basic_int(int n);
float sort2(float *score, int n);
float sort1(float *score, int n);
float average(float *score, int n);
float mini(float *score, int n);
float maxi(float *score, int n);
float sum(float *score, int n);
void math_sqr(void);
void spp(void);
void draw(void);
void Matrix_Mul(void);
void Matrix_Plus(void);
void continent1(void);
void spell(int i);
void greeting_1(void);
int charlong(void);
int charexei(void);
char *strcasestr(const char *haystack, const char *needle);
int sizeofprint(void);
char charwork1(void);
char charcompare(void);

int main(void) {

	greeting_1();
	return 0;
}

void greeting_1() {

	if (Hello() == 0) {
		printf("\n数据处理与技术分析由 曾广明 编写.\n 盗版必究!"); getchar(); getchar();
	}
	else {
		printf(" 好，执行其他函数模块.\n\n");
	}
	putchar(getchar());
	printf("Go on ? You can input 'Y'.Your answer: ");
	if (getchar() == 'Y') {

	}

}

int Hello() {
	int a = 0;

	printf("是否执行 千行计划？\n（只按回车即可肯定，输入其他字符后回车可不执行.）\n【由于函数嵌套，一旦执行，将无法执行其他计划.】\n请输入：");
	char c = getchar();
	if (c != '\n'&&c != 'c')a = 1;
	if (c == '\n')
	{
		interface_main_1(); a = 0;
	}
	if (c == 'c') continent1();
	return a;
}

int interface_main_1() {
	int Q;

	printf("      Hello!!!\n\n~~~·欢迎使用 千行计划 数据分析 程序·~~~.\n");
	printf("\n  ~~~·用户菜单·~~~\n");
	printf("输入【999】关闭 程序.\n");
	printf("输入【0】  查看 根目录.\n");
	printf("输入【1】  处理 一组数据 （数组）.\n");
	printf("输入【2】  处理 一个 整形 数据（ int 范围）.\n");
	printf("输入【3】  求解 一元二次方程.\n");
	printf("输入【4】  处理 字符串（字符）.\n");
	printf("输入【5】  打印 沙漏（符号你来定）.\n");
	printf("输入【6】  处理 矩阵.\n");
	printf("输入【7】  处理 超长整形的各位数之和，并用拼音表述.\n");
	printf("输入【8】  衡量 数据类型.\n");
	printf("请选择您的数据类型.\n\n----我选择的类型是：");
	scanf("%d", &Q);
	interface_main_1_choice_switch(Q);

	return 0;
}

int interface_main_1_choice_switch(int Q) {
	putchar('\n');

	switch (Q)
	{
	case 0:
		continent1();
		exit(0);
		break;
	case(2):
		interface_int_1();//处理单个整形数据.
		break;
	case(1):
		interface_arr_2();//处理浮点数组.
		break;
	case(999):
		printf("感谢您的使用!\n"); printf("\n数据处理与技术分析由 曾广明 编写.\n 盗版必究!");
		getchar(); getchar();
		exit(0);//关闭此程序.
		break;
	case 3:
		math_sqr();//求解一元二次方程.
		break;
	case 4:
		interface_char_3();//处理字符串.
		break;
	case 5:
		draw();//处理图形构造.
		break;
	case 6:
		interface_Matrix_4();//矩阵
		break;
	case 7:
		charlong();//超出整形范围的数据
		break;
	case 8:
		sizeofprint();//衡量数据类型
		break;
	default://专治意外情况.
		interface_main_1();
		break;
	}
EXIT:getchar();
	return 0;
}

void continent1() {
	printf("\n~~~·欢迎查看 千行计划 数据分析 程序函数目录·~~~.\n");
	printf("一、整形数据：\n  1、质数（素数）与合数.\n  2、水仙花数.\n  3、完全数.\n  4、倒序输出.\n  5、最高位.\n  6、卡拉兹(Callatz)猜想.\n  7、拼音表达.\n");
	printf("二、数组：\n  1、求和.\n  2、求最大值.\n  3、求最小值.\n  4、由大至小排序.\n  5、由小至大排序.\n");
	printf("三、字符：\n  1、字数统计.\n");
	printf("四、矩阵：\n  1、乘法.\n  2、加法.\n");
	printf("五、打印：\n  1、沙漏.\n");
	printf("六、方程：\n  1、解一元二次方程.\n");
	putchar('\n');
	getchar(); Hello();
}

int interface_int_1() {
	int n, p, Number0, point0 = 0;
	printf("此分支仅针对整形.\n请不要超出范围.\n");

CCS:printf("\n请输入一个整形数据：");
	while (scanf("%d", &n) != EOF) {
	CCC:getchar(); printf("键入回车以弹出子菜单.\n"); getchar();
		putchar('\n');
		printf("~~~·用户 子 菜单·~~~\n");
		printf("输入【-1】查看 根目录\n");
		printf("输入【0】重新输入 数据\n");
		printf("输入【1】判断 是否为 质数（素数）或者为合数.\n");
		printf("输入【2】判断 是否为 水仙花数.\n");
		printf("输入【3】判断 是否为 完全数，并表示出式子.\n");
		printf("输入【4】倒序输出 整形.\n");
		printf("输入【5】诊断 整形属性.\n");
		printf("输入【6】卡拉兹(Callatz)猜想.\n");
		printf("输入【7】输出 拼音.\n");
		printf("输入【999】退出.\n");
	CSS:printf("请准确输入您的选择：");
		scanf("%d", &p);
		switch (p) {
		case -1:
			continent1();
			break;
		case(0):
			goto CCS;
			break;
		case(1):
			zhiheshu(n);
			goto CCC;
			break;
		case(2):
			shuixianhuashu(n);
			goto CCC;
			break;
		case(3):
			wanquanshu(n);
			goto CCC;
			break;
		case(4):
			daozhi(n);
			goto CCC;
			break;
		case(5):
			basic_int(n);
			goto CCC;
			break;
		case(6):
			Number0 = n;
			while (Number0 != 1) {
				Number0 = Callatz(Number0);
				point0++;
			}
			printf("需要%d步（砍%d下）才能得到 n=1.\n", point0, point0);
			goto CCC;
			break;
		case(7):
			spell(n);
			goto CCC;
			break;
		case(999):
			interface_main_1();
			break;
		default:
			printf("!\n");
			goto CSS;
		}
		putchar('\n');
		goto CCC;
	}
	return 0;
}

int interface_arr_2() {
	int  i, j, k;
	float *score;
	char e, c, d;

	printf("此分支针对数组.\n\n");
	printf("温馨提示【1】：中途输错可以在错误数据后输入 空格 ，并按回车以重录.\n");
	printf("温馨提示【2】：范围错误可以在错误数据后输入 字符‘p’ ，并按回车以重置.\n");
AGAIN:printf("\n您共有多少个数据？\n共有：");
	scanf("%d", &j);
	if (j == 0)interface_main_1();
	score = (float*)malloc(j * sizeof(float));
	printf("输入完毕后请按回车\n");
	for (i = 0; i < j; i++)
	{
	TURN1:printf("请输入 第%d个数字:", i + 1);
		scanf("%f%c", &score[i], &e);
		if (e == ' ')goto TURN1;
		if (e == 'p')goto AGAIN;
	}
	printf("未完待续...\n");
	printf("你共输入了%d个数据，已经保存啦!\n下面执行运算操作\n\n", i);
BACK:printf("请选择您的需求\n");
	printf("~~~·用户 子 菜单·~~~\n");
	printf("输入数字【-1】跳转 根目录\n");
	printf("输入数字【0】 求和\n");
	printf("输入数字【1】 求最大值\n");
	printf("输入数字【2】 求最小值\n");
	printf("输入数字【3】 求平均值\n");
	printf("输入数字【4】 由大至小排序\n");
	printf("输入数字【5】 由小至大排序\n");
	printf("输入数字【6】 重新导入数据\n");
	printf("输入数字【999】退出.\n");
	scanf("%d", &k);
	switch (k)
	{
	case -1:
		free(score);
		continent1();
		break;
	case 0:
		sum(score, i);
		break;
	case 1:
		maxi(score, i);
		break;
	case 2:
		mini(score, i);
		break;
	case 3:
		average(score, i);
		break;
	case 4:
		sort1(score, i);
		break;
	case 5:
		sort2(score, i);
		break;
	case 6:
		goto AGAIN;
		break;
	case(999):
		free(score);
		interface_main_1();
		break;
	default:
		printf("超出范围，请按照提示重新输入\n");
		goto BACK;
	}
	printf("结束了吗？按任意键以继续\n或输入N或n以结束\n");
	d = getchar();
	c = getchar();
	if (c == 'N' || c == 'n') {
		printf("好，我们结束！\n");
		getchar(); getchar();
		free(score);
		interface_main_1();
	}
	else
		goto BACK;
	free(score);
	return 0;
}

int interface_char_3() {
	int Q;
	printf("此分支针对字符串（字符）.\n\n");
	printf("~~~·用户 子 菜单·~~~\n");
	printf("输入【-1】查看 根目录\n");
	printf("输入【0】测试 实验室数据\n");
	printf("输入【1】操作 字符串计数.\n");
	printf("输入【2】分析 一个字符串.\n");
	printf("输入【3】比较 两个字符串.\n");
	printf("请输入:");
	scanf("%d", &Q);
	switch (Q) {
	case -1:
		continent1();
		break;
	case 0:
		charexei();
		break;
	case 1:
		spp();
		break;
	case 2:
		charwork1();
		break;
	case 3:
		charcompare();
		break;
	}
	interface_main_1();
	return 0;
}

int interface_Matrix_4() {
	int Mat1;

	printf("请选择您的需求\n");//处理矩阵.
	printf("~~~·用户 子 菜单·~~~\n");
	printf("输入数字【0】 根目录\n");
	printf("输入数字【1】 矩阵乘法\n");
	printf("输入数字【2】 矩阵加法\n");
	printf("输入数字【999】退出.\n");
	scanf("%d", &Mat1);
	switch (Mat1)
	{
	case 0:
		continent1();
		break;
	case(1):
		Matrix_Mul();//乘法.
		break;
	case(2):
		Matrix_Plus();//加法
		break;
	case(999):
		interface_main_1();
		break;
	default:
		break;
	}
	interface_main_1();
	return 0;
}

int daozhi(int n)
{
	int k = 0;
	do {
		k = 10 * k + (int)n % 10;
		n = n / 10;
	} while (n != 0);

	printf(" 数字反转为：%d\n", k);
	return k;
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

void shuixianhuashu(int n) {
	int a[99999] = { 0 }, i = 0, j;
	int k = 0, l = n;
	while (l) {
		a[i] = (int)l % 10;
		l /= 10;
		i++;
	}
	for (j = 0; j <= i - 1; j++) {
		k += (pow(a[j], i));
	}

	if (n == k) {
		switch (i) {
		case 0:
		case 1:
			printf(" %d 是独身数.\n", n);
			break;
		case 3:
			printf(" %d 是水仙花数.\n", n);
			break;
		case 4:
			printf(" %d 是四叶玫瑰数.\n", n);
			break;
		case 5:
			printf(" %d 是五角星数.\n", n);
			break;
		case 6:
			printf(" %d 是六合数.\n", n);
			break;
		case 7:
			printf(" %d 是北斗七星数.\n", n);
			break;
		case 8:
			printf(" %d 是八仙数.\n", n);
			break;
		case 9:
			printf(" %d 是九九重阳数.\n", n);
			break;
		default:
			printf("结束.\n");
			break;
		}
	}
	else if (i > 9) printf(" %d 可能不是水仙花数，因为它超出了整形范围.\n", n);
	else printf(" %d 不是水仙花数.\n", n);
}

void wanquanshu(int n) {

	int i = n, p, q = 1, s = 0;
	for (p = 1; p < i; p++) {
		q = i % p;
		if (q == 0) s = s + p;
	}
	if (s == i) {
		printf(" %d 是完全数，式子为：", i);
		printf("%d = 1", i);
		for (p = 2; p <= i / 2; p++) {
			q = i % p;
			if (q == 0) printf(" + %d", p);
		}
		putchar('\n');
	}
	else printf(" %d 不是完全数.\n", i);
}

float sum(float *score, int n)
{
	int i;
	float sum;
	sum = 0;
	for (i = 0; i < n; i++)
		sum += score[i];
	printf(" 其中这%d个数字的和/SUM= %.1f\n", n, sum);
	return 0;
}

float maxi(float *score, int n)
{
	int i;
	float maxi = 0;
	for (i = 0; i < n; i++)
	{
		if (score[i] > maxi)
			maxi = score[i];
	}
	printf(" 其中这%d个数字的最大值/MAX= %.1f\n", n, maxi);
	return 0;
}

float mini(float *score, int n)
{
	int i;
	float mini = 99999;
	for (i = 0; i < n; i++)
	{
		if (score[i] <= mini)
			mini = score[i];
	}
	printf(" 其中这%d个数字的最小值/MIN= %.1f\n", n, mini);
	return 0;
}

float average(float *score, int n)
{
	int i;
	float sum, ave;
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += score[i];
	}
	ave = sum / n;
	printf(" 其中这%d个数字的平均值/AVERAGE= %.1f\n", n, ave);
	return 0;
}

float sort1(float *score, int n)
{
	int i, j;
	float c;
	c = 0;
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (score[j] > score[j - 1])
			{
				c = score[j];
				score[j] = score[j - 1];
				score[j - 1] = c;
			}
		}
	}
	printf(" 其中这%d个数字的由大至小排序/RANK  ", n);
	for (i = 0; i < n; i++)
	{
		printf("%.1f ", score[i]);
	}
	putchar('\n');
	return 0;
}

float sort2(float *score, int n)
{
	int i, j;
	float c;
	c = 0;
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (score[j] < score[j - 1])
			{
				c = score[j];
				score[j] = score[j - 1];
				score[j - 1] = c;
			}
		}
	}
	printf(" 其中这%d个数字的由小至大排序/RANK  ", n);
	for (i = 0; i < n; i++)
	{
		printf("%.1f ", score[i]);
	}
	putchar('\n');
	return 0;
}

void math_sqr() {
	float a, b, c, d;
	float x1, x2, x;
	char z, y;
	printf("你好!\n欢迎使用求根程序！\n\n");
LOOP:printf("请输入 a :\n a = ");
	scanf("%f", &a);
	printf("请输入 b :\n b = ");
	scanf("%f", &b);
	printf("请输入 c :\n c = ");
	scanf("%f", &c);
	d = b * b - 4 * a*c;
	if (d < 0) printf("此方程无解！！！\n");
	else if (d == 0) {
		x = (-b) / (2 * a);
		printf("存在一个根：x = %.3f\n", x);
	}
	else {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("存在两个根：\n x1 = %.3f \n x2 = %.3f\n", x1, x2);
	}
	printf("还有数据吗？\n输入‘N’或者‘n’以退出，键入其他来继续。\n您的回复 ： ");
	y = getchar();
	z = getchar();
	if (!(z == 'n' || z == 'N'))goto LOOP;
	interface_main_1();
}

void spp() {
	int i = 0, letter = 0, blank = 0, digit = 0, other = 0;
	char c;
	printf(" 欢迎使用字符统计程序!\n此程序不适用于中文，只适用于统计一段单词文章.\n 按回车键即统计字符数.\n");
	printf("\n温馨提示：连续导入两段空白文即可退出.\n\n");
	printf("请输入一段文章：");
	getchar();
	while ((c = getchar())) {
		if (c == 32)
			blank++;
		else if (c >= 65 && c <= 90)
			letter++;
		else if (c >= 97 && c <= 122)
			letter++;
		else if (c >= 48 && c <= 57)
			digit++;
		else other++;

		if (c == '\n') {
			other--;
			if (letter + blank + digit + other == 0) {
				i++;
				if (i == 2)goto EXIT;
			}
			printf("letter = %d,\n blank = %d,\n digit = %d,\n other = %d.\n", letter, blank, digit, other);
			letter = 0;
			blank = 0;
			digit = 0;
			other = 0;
			i = 0;
			putchar('\n');
			printf("请再输入一段文章：");
		}
	}
EXIT:;
}

void draw() {
	int N, l, n = 0, i = 0, d;
	char c, e;
	printf("规则：行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等.\n");
	printf("请输入1个正整数N（≤1000）和一个符号，中间以空格分隔。\n请输入：");
	scanf("%d %c", &N, &c);
	for (l = 1; 2 * l*l - 1 <= N; l++) {
		n = 2 * l*l - 1;//zong
		i = l;//hang
	}
	d = N - n;

	int j, k, m;
	for (j = i; j >= 1; j--) {
		for (k = 0; k < i - j; k++) {
			putchar(' ');
		}
		for (m = 1; m <= (2 * j - 1); m++) {
			putchar(c);
		}
		putchar('\n');
	}

	int p;
	for (p = 2; p <= i; p++) {
		for (k = 0; k < i - p; k++) {
			putchar(' ');
		}
		for (m = 1; m <= (2 * p - 1); m++) {
			putchar(c);
		}
		putchar('\n');
	}

	printf("剩余 %d 个 %c .\n", d, c);
	e = getchar();
	printf("回车以返回菜单.\n");
	e = getchar();
	interface_main_1();
}

void Matrix_Plus() {
	int a1[99][99], a2[99][99], i1, j1, k1, l1;
	printf("输入行 列,用空格键分开。\n");
	printf("输入的行 列：");
	scanf("%d %d", &i1, &j1);
	printf("导入第一个矩阵：\n");
	for (k1 = 1; k1 <= i1; k1++) {
		for (l1 = 1; l1 <= j1; l1++) {
			printf("\n请输入%d行%d列的元素 : ", k1, l1);
			scanf("%d", &a1[k1][l1]);
		}
	}
	printf("\n导入第二个矩阵：\n");
	for (k1 = 1; k1 <= i1; k1++) {
		for (l1 = 1; l1 <= j1; l1++) {
			printf("\n请输入%d行%d列的元素 : ", k1, l1);
			scanf("%d", &a2[k1][l1]);
		}
	}

	printf("\n同形矩阵相加：\n");
	int sum[99][99];
	for (k1 = 1; k1 <= i1; k1++) {
		for (l1 = 1; l1 <= j1; l1++) {
			sum[k1][l1] = a1[k1][l1] + a2[k1][l1];
		}
	}
	printf("新矩阵为：\n");
	for (k1 = 1; k1 <= i1; k1++) {
		for (l1 = 1; l1 <= j1; l1++) {
			printf(" %4d ", sum[k1][l1]);
		}
		putchar('\n');
	}
	getchar();
	getchar();
}

void basic_int(int n) {
	int i = 0, s = 0;
	while (n) {
		i += n % 10;
		n /= 10;
		s++;
	}
	printf("总共 %d 位数，各位数之和为 %d", s, i);
}

int Callatz(int N) {
	if (N % 2) N = (3 * N + 1) / 2;
	else N /= 2;
	return N;
}

void spell(int n) {
	int j = 0, wi = n;
	while (wi) {
		wi /= 10;
		j++;
	}
	int k, t = 0;
	for (k = j - 1; k >= 0; k--) {
		t = n / (int)(pow(10, k)) - (n / (int)(pow(10, k + 1))) * 10;
		switch (t)
		{
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;
		default:
			break;
		}
		if (k)putchar(' ');
	}
}

void Matrix_Mul() {
	int a1[99][99], i1, j1, k1, l1;
	printf("输入行 列,用空格键分开。\n");
	printf("输入的行 列：");
	scanf("%d %d", &i1, &j1);
	printf("导入第一个矩阵：\n");
	for (k1 = 1; k1 <= i1; k1++) {
		for (l1 = 1; l1 <= j1; l1++) {
			printf("\n请输入%d行%d列的元素 : ", k1, l1);
			scanf("%d", &a1[k1][l1]);
		}
	}

	printf("\nNext\n");

	int a2[99][99], j2, k2, l2;
	printf("行数已默认确定，请输入列数。\n输入的列 ： ");
	scanf("%d", &j2);
	printf("导入第二个矩阵：\n");
	for (k2 = 1; k2 <= j1; k2++) {
		for (l2 = 1; l2 <= j2; l2++) {
			printf("\n请输入%d行%d列的元素:", k2, l2);
			scanf("%d", &a2[k2][l2]);
		}
	}

	printf("Okay\n\n");

	int new[99][99], i, j, k;

	//new[i1][j2]=a1[i1][j1]*a2[j1][j2].
	for (i = 1; i <= i1; i++) {
		for (j = 1; j <= j2; j++) {
			new[i][j] = 0;
			for (k = 1; k <= j1; k++) {
				new[i][j] += a1[i][k] * a2[k][j];
			}
		}
	}
	printf("新矩阵为：\n");
	for (i = 1; i <= i1; i++) {
		for (j = 1; j <= j2; j++) {
			printf(" %4d ", new[i][j]);
		}
		putchar('\n');
	}
	getchar();
	getchar();
}

int charlong() {
	char c[99999] = { 0 };
	int s = 0;
	printf("输入这个长数值：");
	scanf(" %s", c);
	putchar('\n');
	for (int i = 0; i < strlen(c); i++) {
		s += c[i] - '0';
	}
	printf("这个数各位数之和为：%d\n", s);
	printf("拼音表述为：");
	spell(s);
	putchar('\n');
	getchar(); getchar();
	return s;
}

char *strcasestr(const char *str1, const char *str2) {
	char *cp = (char *)str1;
	char *s1, *s2;

	if (!*str2) return (char *)str1;

	while (*cp) {
		s1 = cp;
		s2 = (char *)str2;

		while (*s1 && *s2 && !(tolower(*s1) - tolower(*s2)))
			(void)(s1++), s2++;
		if (!*s2) return cp;
		cp++;
	}

	return NULL;
}

int charexei() {
	char c[] = "Hello,test";
	int cnt = 0;
	printf("c[] = \"Hello, test\"\n");
	printf("sizeof=%lu\n", sizeof(c));//含'\0'.
	printf("strlen=%lu\n", strlen(c));//不含'\0'.
	char *p = strchr(c, 'l');//从左边找'l'的地址.
	printf("p=strchr(c, 'l'):%s\n", p);
	printf("*(p+4)=%c\n", *(p + 4));//'l'的地址+4的那一个内容.
	printf("strchr(c, 'f'):%s\n", strchr(c, 'f')); //从左边找'f'的地址.
	printf("strrchr(c, 'l'):%s\n", strrchr(c, 'l'));//从右边找'l'的地址.
	printf("strchr(p+1, 'l'):%s\n", strchr(p + 1, 't'));
	char us = *p;
	*p = '\0';//用地址改变了c的内容
	printf("c:%s\n", c);
	char *c0 = (char*)malloc(strlen(c) + 1);//动态内存分配
	printf("\nc0=%s\n", strcpy(c0, c));//拷贝数据
	*p = us;
	printf("c:%s\n", c);
	printf("c0:%s\n", c0);
	printf("strstr(c, 'llo'):%s\n", strstr(c, "llo"));//从左边找"llo"的地址.
	printf("strstr(c, 'Llo'):%s\n", strstr(c, "Llo"));
	printf("strcasestr(c, 'he'):%s\n", strcasestr(c, "he"));//从左边找"he（无论大小写）"的地址.

	char *d = (char*)malloc(strlen(c) + 999), *d1 = d;
	printf("\nexchange=%s\n", strcpy(d, c));
	printf("strlen=%lu\n", strlen(d));

	putchar('\n');
	printf("输入字符串：");
	scanf(" %s", d);
	while (*(d + cnt) != '\0') {
		printf("*(d + %d)=%c\n", cnt, *(d + cnt));
		cnt += 1;
	}
	printf("cnt=%d\n", cnt);
	printf("strlen=%lu\n", strlen(d));
	free(d1);//释放已分配动态内存，归还。
	free(c0);

	putchar('\n');
	char str1[] = "abg", str2[] = "abh", str3[] = "abH", str4[] = "abH ";//比较字符串大小-1，0，1表示.
	printf("字符串str1[] = \"abc\", str2[] = \"abh\", str3[] = \"abH\", str4[] = \"abH \" \n");
	printf("strcmp(str1, str2)= %d\n", strcmp(str1, str2));
	printf("strcmp(str2, str3)= %d\n", strcmp(str2, str3));
	printf("strcmp(str1, str1)= %d\n", strcmp(str1, str1));
	printf("strcmp(str3, str4)= %d\n", strcmp(str3, str4));

	putchar('\n');
	getchar(); getchar();
	return 0;
}

int sizeofprint() {
	printf("sizeof(int)=%lu\n", sizeof(int));
	printf("sizeof(char)=%lu\n", sizeof(char));
	printf("sizeof(double)=%lu\n", sizeof(double));
	printf("sizeof(float)=%lu\n", sizeof(float));
	printf("sizeof(long long)=%lu\n", sizeof(long long));
	printf("sizeof(long)=%lu\n", sizeof(long));
	printf("sizeof(short)=%lu\n", sizeof(short));
	putchar(getchar());
	interface_main_1();
	return 0;
}

char charwork1() {
	int range;
	printf("先给最长的字符串足够大的长度：");
	scanf("%d", &range);
	putchar(getchar());
	char *p = (char*)malloc(range + 1), *q = p;
	printf("请输入：");
	gets(q);
	printf("该结果：");
	while (*q != '\0') {
		putchar(*q++);
	}
	putchar('\n');
	q = p;
	printf("字符串的可视长度是：%lu\n", strlen(p));
	printf("\n查找字符串，\n");
A:printf("~~~·用户 子 菜单·~~~\n");
	printf("输入【0】跳过\n");
	printf("输入【1】从左边寻找单个字符.\n");
	printf("输入【2】从右边寻找单个字符.\n");
	printf("输入【3】寻找字符串\n");
	printf("输入【4】不分大小写 寻找字符串\n");
	printf("请选择：");
	int Q; char cq, *cp = (char*)malloc(range + 1);
	scanf("%d", &Q); putchar(getchar());
	switch (Q)
	{
	case 0:
		printf("再见！继续回车.");
		break;
	case 1:
		printf("输入寻找的单字符：\n");
		cq = getchar();
		printf("strchr(q, cq):%s\n", strchr(q, cq));
		goto A;
		break;
	case 2:
		printf("输入寻找的单字符：\n");
		cq = getchar();
		printf("strchr(q, cq):%s\n", strrchr(q, cq));
		goto A;
		break;
	case 3:
		printf("输入寻找的字符串:");
		scanf("%s", cp);
		printf("\nstrstr(q, cp):%s\n", strstr(q, cp));
		goto A;
		break;
	case 4:
		printf("输入寻找的字符串:");
		scanf("%s", cp);
		printf("\nstrcasestr(q, cp):%s\n", strcasestr(q, cp));
		goto A;
		break;
	default:
		goto A;
		break;
	}
	free(p);
	free(cp);
	putchar(getchar());
	return 0;
}

char charcompare() {

	int range;
A:printf("先给最长的字符串足够大的长度：");
	scanf("%d", &range);
	putchar(getchar());

	printf("第一个字符串:\n");
	char *p = (char*)malloc(range + 1), *q = p;
	printf("请输入：");
	gets(q);
	printf("该结果：");
	while (*q != '\0') {
		putchar(*q++);
	}
	putchar('\n'); putchar('\n');
	q = p;

	printf("第二个字符串:\n");
	char *r = (char*)malloc(range + 1), *s = r;
	printf("请输入：");
	gets(s);
	printf("该结果：");
	while (*s != '\0') {
		putchar(*s++);
	}
	putchar('\n');
	s = r;

	printf("\n比较结果：");
	printf("strcmp(str1, str2)= %d\n", strcmp(q, s));
	int tips = strcmp(q, s);
	printf("比较结果（翻译版）：");
	if (tips == 0)printf("两个字符串 一致.\n");
	else if (tips == 1)printf("第一个字符串比第二个要 大.\n");
	else printf("第一个字符串比第二个要 小.\n");

	free(p); free(r);
	printf("Go on? Input 'Y' to return.Your answer:");
	if (getchar() == 'Y')goto A;
	putchar(getchar());
	return 0;
}

