#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int mining = 0;
printf("���ǿ���(0 or 1):>");
scanf("%d", &mining);
if (mining == 1)
{
	printf("��������\n");
}
else
{
	printf("��û����\n");
}
return 0;
}