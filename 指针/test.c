#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 10;//向内存申请四个字节
	int* p=&a;//取地址a
	//有一种变量用来存放地址—指针变量*
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;//解引用操作符,对p进行解引用操作，找到对象a，把a改成20
	printf("a=%d\n", a);
	return 0;
}