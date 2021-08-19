#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//int i = 0;//初始化
	//while (i < 10)//判断
	//{
	//	//......
	//	i++;//调整
	//}

	//int i = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d\n", i); 
	//}
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	for (i = 0; i < 10; i++)
		{
		printf("%d\n", arr[i]);
		}
	return 0;
}