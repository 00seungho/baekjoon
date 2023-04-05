#include <stdio.h>
int main (void)
{
char word[16];
int count=0;
	int i,j,k;
	scanf("%s",word);
	i=0;
	while(word[i] != '\0')
	{
	    if(word[i]>=65 && word[i]<=67)
		{
		count += 3; 	
		}
	    else if(word[i]>=68 && word[i]<=70)
		{
			count += 4;
		}
        else if(word[i]>=71 && word[i]<=73)
		{
			count += 5;
		}
	    else if(word[i]>=74 && word[i]<=76)
		{
			count += 6;
		}
		else if(word[i]>=77 && word[i]<=79)
		{
			count += 7;
		}
		else if(word[i]>=80 && word[i]<= 83)
		{
			count += 8;
		}
		else if(word[i] >= 84 && word[i] <= 86)
		{
			count += 9;
		}
		else if(word[i] >= 87 && word[i] <= 90)
		{
				count += 10;
		}
	
		i++;
	}
	printf("%d",count);
	
}