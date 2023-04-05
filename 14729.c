#include <stdio.h>
int main (void)
{
	int number,i,j,temp;
	scanf("%d",&number);
	double zemsu[number];
	for(i=0;i<number;i++)
	{
		scanf("%lf",&zemsu[i]);
		fflush(stdin);
	}
  for(i=0;i<number;i++)
  {
	  for(j=0;j<number-1;j++)
	  {
		  if(zemsu[j] > zemsu[j+1])
	  {
		  temp = zemsu[j];
			zemsu[j] = zemsu[j+1];
			  zemsu[j+1] = temp;
	  }
	  }
  }
for(i=0;i<7;i++)
{
	printf("%.3lf\n",zemsu[i]);
}
}