#include <stdio.h>
#include <stdlib.h>
long int evenpint (int long a,int long b,int long c)
{
	if(c - b <= 0)
		{
			return -1;
		}
  	
	return (a/(c-b)+1);
}
int main ()
{
	int long a,b,c;
	scanf("%ld %ld %ld",&a,&b,&c);
	printf("%ld",evenpint(a,b,c));
	exit(0);
}