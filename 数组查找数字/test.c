#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//int k = 7;
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	if (k == arr[i])
	//	{
	//		printf("�ҵ����±�Ϊ��%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//{
	//	printf("�Ҳ�������\n");
	//}
	//return 0;

	int k = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int l = 0;//���±�
	int r = sz-1;//���±�
	
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (arr[mid] > k)
		{
		r = mid - 1;
		}
		else if (arr[mid] < k)
		{
		l = mid + 1;
		}
		else
		{
		printf("�ҵ����֣��±�Ϊ%d\n", mid);
		break;
		}
	}
	if (l > r)
		printf("�Ҳ�������\n");
	return 0;
}