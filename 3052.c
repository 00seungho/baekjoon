#include <stdio.h>

int main (void)
{
int array[10];
	int max_array[1001];
	int i,j,count=0;
	for(i=0;i<10;i++)
	{
	scanf("%d",&array[i]);
	array[i] = array[i] % 42; 
	}
	
	for(i=0; i<1001;i++)
	{
		max_array[i] = 0;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<1001;j++)
		{
			if(array[i] == j)
			{
				max_array[j] ++;
				if(max_array[j] >= 1)
				{
					max_array[j] = 1;
				}
			}
		}
	}
	for(i=0;i<1000;i++)
	{
		count = count + max_array[i];
	}
	printf("%d",count);
}
