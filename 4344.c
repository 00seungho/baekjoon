#include <stdio.h>


int main (void)
{
int c,i,j,n,num;
	scanf("%d",&c);
	double all[c];
	for(i=0; i<c; i++)
	{
		double avg = 0.0;
		int aek=0;
		int num[1001];
		int allcount=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
		scanf("%d",&num[j]);
	    allcount += num[j];
		}
	avg = allcount / n;
	for(j=0;j<n;j++)
	{
		if(avg < num[j])
		{
			 all[i] = all[i] + 1.0;
		}
	}
		all[i] = all[i] / n * 100;
		
	}
	
	for(i=0; i<c; i++)
	{
		printf("%.3lf%%\n",all[i]);
	}
	
}