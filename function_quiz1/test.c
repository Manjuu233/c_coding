#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
	int i;
	for (i = 2; i <n; i++)
	{
		if (n % i == 0)
				return 0; 
	}
	return 1;		
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}