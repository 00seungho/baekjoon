#include <stdio.h>
int main (void)
{
 int a,i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=a-i;j>0;j--)
		{
			printf("*");
		}
			printf("\n");
	}
}