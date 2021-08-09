#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern int add(int, int);
int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}