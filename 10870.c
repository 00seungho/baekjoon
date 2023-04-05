#include <stdio.h>
int fibonazi (int n)
{
	if(n <= 0) return 0;
	if(n <= 1) return 1;
	else if(n >= 2)return(fibonazi(n-1) + fibonazi(n-2));
}
int main (void)
{
	int a;
	scanf("%d",&a);
	printf("%d",fibonazi(a));
}