#include <stdio.h> 
int main(void)
{
	int num,j,i;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (j = 1; j <= num - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}