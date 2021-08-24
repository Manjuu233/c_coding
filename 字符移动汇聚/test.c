#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to my blog";
	char arr2[] = "##################";
	int l = 0;
	//int r = sizeof(arr1) / sizeof(arr1[0]) - 2;
	int r = strlen(arr1)-1;
	while (l<=r)
	{
		arr2[l] = arr1[l];
		arr2[r] = arr1[r];
		printf("%s\n", arr2);
		Sleep(150);
		system("cls");
		l++;
		r--;
	}
	return 0;
}