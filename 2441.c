#include <stdio.h>
int main (void)
{
 int a[3];
	int temp;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	for(int i=0;i<2;i++)
	{
		if(a[i] < a[i+1])
		{
			temp = a[i];
			a[1] = a[i+1];
			a[i+1] = temp;
		}
	}
	printf("%d",a[1]);
	
}