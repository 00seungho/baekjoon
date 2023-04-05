#include <stdio.h>
int main (void)
{
int num,i,j,c,count = 0,allcount = 0;
	scanf("%d",&num);
char word[81];
	int array[num];
	for(i=0;i<num;i++)
	{
		scanf("%s",word);
		fflush(stdin);
		while(word[j])
		{
			if(word[j] == 'O')
			{
				count ++;
				allcount = allcount + count;
			}
			else if(word[j] == 'X')
			{
				count = 0;
			}
			j++;
		}
		array[i] = allcount;
		allcount = 0;
		count = 0;
		for(j=0;j<81;j++)
		{
			word[j] = '\0';
		}
		j=0;
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",array[i]);
	}
}