#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;
	}*/
	//{
	//	printf("%d\n", i);
	//	i++;
	//}

	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//	putchar(ch);
	//return 0;

	int ret = 0;
	int ch = 0;
	char passwd[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s",passwd );//scanf读取到空格之前
	printf("确认？");
	while ((ch = getchar()) != '\n')//为什么要多一个getchar？这样就没问题了吗？
		//getchar一次只能读取一个字符
	{
		;
	}
	ret = getchar();
	if (ret == 'Y')
	{
		printf("已确认");
	}
	else
	{
		printf("取消确认");
	}
	return 0;
}