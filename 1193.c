#include <stdio.h>
void sum(int x)
{
	int i=1;
	while(x>i)
	{
		x-=i;
		i++;
	}
	if(i % 2 == 1)
	{
	 printf("%d/%d",i+1-x,x);
	}
	else
	{
		printf("%d/%d",x,i+1-x);
	}
}
int main(void)
{
	int a;
	scanf("%d",&a);
	sum(a);
}