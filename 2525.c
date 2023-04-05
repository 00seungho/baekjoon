#include <stdio.h>

int main (void)
{
	int hour,minute,time,i;
	scanf("%d %d",&hour,&minute);
	scanf("%d",&time);
	minute = minute + time;
	
	while(!(minute <= 59 && hour <= 24)){
	if(59< minute)
	{
		hour ++;
		minute = minute - 60;
	}
	if(23 < hour)
	{
		hour = 0;
	}
		
	}
	
	printf("%d %d",hour,minute);
}