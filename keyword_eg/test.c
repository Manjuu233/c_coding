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
	auto int a = 10;//局部变量（自动变量）
	//atuo大部分时间被省略

	register int b = 10;
	//建议把b定义为寄存器变量

	typedef unsigned int uint;
	//类型重定义

	
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}
