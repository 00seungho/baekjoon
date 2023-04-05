#include <stdio.h>
int check[10000];
int notdrkaprekar(int n)
{
 int sum = n; 
	while(n!=0) { 
		sum += n % 10; 
		n/=10; 
			   } 
	return sum;
}
int main(void)
{
	int i;
	for(i=0; i <10000; i++)
	{
		check[i] = 0;
	}
	for(i=0; i<10000; i++)
	{
		int idx = notdrkaprekar(i);
		check[idx] = 1;
	}
	for(i=0; i<10000; i++)
	{
		if(check[i] == 0)
		{
			printf("%d\n",i);
		}
	
	}
	return 0;
}