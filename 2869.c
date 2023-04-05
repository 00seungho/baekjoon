#include <stdio.h>
int main(void)
{
	int V,A,B,N=1;
	scanf("%d %d %d",&A,&B,&V);
if((V-A)%(A-B) == 0)
{
	printf("%d",N+((V-A)/(A-B)));
}
	
	else
	{
		printf("%d",N+((V-A)/(A-B))+1);
	}
}