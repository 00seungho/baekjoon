#include <stdio.h>
int allcount = 0;	

int hansu(int x,int y,int z)
{
	if(x - y == y - z)
	{
		return 1;
	}
	else return 0;
		
}
int main(void)
{
	int a,i,c;
		int array[3];
		scanf("%d",&a);
		if(a >= 100){
		for(i=100; i<=a; i++)
		{
			if(100 <= i < 1000)
			{
				array[2] = i / 100;
				array[1] = (i % 100) / 10;
			    array[0] = i % 10;
				allcount =allcount + hansu(array[2],array[1],array[0]);
			}
			
		}
			printf("%d",allcount + 99);
		}
		else if(a <= 99)
		{
		 printf("%d",a);
		}	
}