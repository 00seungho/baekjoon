#include <stdio.h> 
int main (void)
{
int array[26];
	char word[1000000];
	int i,r;
	int temp=0,max=0,min=0;
	for(i=0;i<27;i++)
	{
		array[i] = 0;
	}
	scanf("%s",word);
	
	i=0;
	while(word[i] != '\0')
	{
		for(r=0;r<26;r++)
		{
			if(word[i] == r+65)
			{
				array[r] ++;
			}
			else if(word[i] == r+97)
			{
				array[r] ++;
			}
		}
		i++;
	}
	
	for(i=0;i<26;i++)
{
	if(temp <= array[i])
	{
		temp = array[i];
		max = i;
	}
}
	for(i=0;i<26;i++)
	{
		if(temp == array[i])
		{
			min++;
		}
	}
	
	if(min >= 2){
		printf("?");
	}
	else{
		printf("%c",max+65);
	}
	
	
}