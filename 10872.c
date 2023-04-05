#include <stdio.h>
int factorial (int x)
{
 if(x <= 1) return (1);
else return x * factorial(x-1);
}

int main (void)
{
	int a;
	scanf("%d",&a);
	printf("%d",factorial(a));
}