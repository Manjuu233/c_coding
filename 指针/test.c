#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 10;//���ڴ������ĸ��ֽ�
	int* p=&a;//ȡ��ַa
	//��һ�ֱ���������ŵ�ַ��ָ�����*
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;//�����ò�����,��p���н����ò������ҵ�����a����a�ĳ�20
	printf("a=%d\n", a);
	return 0;
}