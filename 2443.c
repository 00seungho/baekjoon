#include <stdio.h>

int main(void)
{
    int num, i, j;
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        for (j = 1; j <= num - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
