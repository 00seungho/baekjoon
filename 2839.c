#include <stdio.h>
int main (void)
{
	int a,b=0;
	scanf("%d",&a);
while(a > 0)
{
	if(a % 5 == 0)
	{
		a -= 5;
	    b++;
	}
else if(a % 3 == 0)
	{
		a -= 3;
	    b++;
	}
else if(a > 5)
	{
		a -= 5;
		b++;
	}
else{
	b = -1;
	break;
}
}
printf("%d",b);	
}