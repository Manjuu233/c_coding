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
	printf("���������룺>");
	scanf("%s",passwd );//scanf��ȡ���ո�֮ǰ
	printf("ȷ�ϣ�");
	while ((ch = getchar()) != '\n')//ΪʲôҪ��һ��getchar��������û��������
		//getcharһ��ֻ�ܶ�ȡһ���ַ�
	{
		;
	}
	ret = getchar();
	if (ret == 'Y')
	{
		printf("��ȷ��");
	}
	else
	{
		printf("ȡ��ȷ��");
	}
	return 0;
}