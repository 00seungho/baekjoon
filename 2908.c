#include <stdio.h>
int main (void)
{
	char num_b[4];
	char num_a[4];
	int i,j,a=0,b=0,c=1;
	scanf("%s",num_a);
	fflush(stdin);
	scanf("%s",num_b);
	fflush(stdin);
   
	for(j=0;j<3;j++)
   {
		for(i=0;i<10;i++)
	{
		if(num_a[j] == i+48)
		{
			a += i * c;
		}
		if(num_b[j] == i+48)
		{
			b += i * c;
		}
	}
   c *= 10;
	}
	if(a < b)
	{
		printf("%d",b);
	}
	else{
		printf("%d",a);
	}
}