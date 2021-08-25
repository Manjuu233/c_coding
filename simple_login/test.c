#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	char passwd[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë£º");
		scanf("%s", passwd);
		if (strcmp(passwd , "123456")==0)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
	}
	if (i == 3)
		printf("ÍË³ö\n");
	return 0;
}