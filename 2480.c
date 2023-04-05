#include <stdio.h>

int main (void)
{
 int dice[3];
	int win = 0,temp;
	scanf("%d %d %d",&dice[0],&dice[1],&dice[2]);
	if(dice[1] == dice[0] && dice[2] == dice[0])
	{
		win = 10000 + (dice[0]*1000);
	}
	else if(dice[0] != dice[1] && dice[1] != dice[2] && dice[0] != dice[2])
	{
		if(dice[0] < dice[1])
		{
		 temp = dice[1]; 
		}
		else{
			temp = dice[0];
		}
		if(temp < dice[2])
		{
			temp = dice[2];
		}
		win = temp * 100;
		
	}
	else 
	{
		if(dice[0] == dice[1])
		{
			win = 1000+ (dice[0] * 100);
		}
		else if(dice[0] == dice[2])
		{
			win = 1000+ (dice[0] * 100);
		}
		else if (dice[1] == dice[2])
		{
			win = 1000+ (dice[1] * 100);
		}
	}
	printf("%d",win);
	
}