#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define MAX 100
//#define�����ʶ������
//#define�����
int main()
{
	//int a = MAX;
	int b = 10;
	int c = 20;
	extern int max(int, int);
	int intmax = max(b, c);
	/*printf("max=%d\n", max);*/
	printf("%d\n", intmax);
	return 0;
}