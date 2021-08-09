#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(X,Y) (X>Y?X:Y)//define∂®“Â∫Í
int main()
{
	int a = 20;
	int b = 10;
	int max = 0;
	max = MAX(a, b);
	printf("%d\n", max);
return 0;
}