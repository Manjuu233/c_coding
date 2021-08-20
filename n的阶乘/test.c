#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    int s = 1;
    printf("«Î ‰»În:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s * i;

    }
    printf("%d!=%d\n", n, s);
}