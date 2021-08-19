#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d\n",i );
		i++;
	} 
	while (i <= 10);
	return 0;
}