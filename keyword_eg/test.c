#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void test()
{
	static int c = 1;
	c++;
	printf("c=%d\n", c);
}
int main()
{
	auto int a = 10;//�ֲ��������Զ�������
	//atuo�󲿷�ʱ�䱻ʡ��

	register int b = 10;
	//�����b����Ϊ�Ĵ�������

	typedef unsigned int uint;
	//�����ض���

	
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}
