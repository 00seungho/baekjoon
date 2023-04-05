#include <stdio.h>
int main (void)
{
	char words[1000000];
	scanf("%[^\n]s",words);
	int i=0,r,count=0;
	
	while(words[i] != 0)
	{
		if(words[i] == 32)
	{
		count ++;
	}
		i++;	
	}
	if(words[0] == 32)
	{
		count --;
	}
	if(words[i-1] == 32)
	{
		count --;
	}
	printf("%d",count+1);
}