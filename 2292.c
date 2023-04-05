#include <stdio.h>
void print (int x)
{
	printf("%d",x);
}
int sum (int x)
{
	int i=1,temp=1;
	while(1)
	{
		if(x == 1)
		{
			return 1;
		}
		if(temp>=x)
		{
		return i;
		}
		temp = temp + 6*i;
		i++;
	}
	
}
int main (void)
{
	int a,b;
	scanf("%d",&a);
	print(sum(a));
}