#include <stdio.h>
int main (void)
{
	int c,i,j,all=0;
	scanf("%d",&c);
	char array[c+1];
	int num[c];
fflush(stdin);
	scanf("%s",array);
	for(i=0;i<c;i++)
	{
		for(j=48;j<=57;j++)
		{
			if(array[i] == j)
			{
				all += j - 48;
			}
		}
	}
	printf("%d",all);
}