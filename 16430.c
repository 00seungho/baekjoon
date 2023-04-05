#include <stdio.h>
int main (void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	int a1;
	a1 = b;
	a1 -= a;
	printf("%d %d",a1,b);
}