#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int mining = 0;
printf("你是矿工吗？(0 or 1):>");
scanf("%d", &mining);
if (mining == 1)
{
	printf("你妈死了\n");
}
else
{
	printf("那没事了\n");
}
return 0;
}