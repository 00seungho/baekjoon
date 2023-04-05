#include <stdio.h>
int main (void)
{
char word[101];
	scanf("%s",word);
	int array[26];
	int i,j;
	for(i=0;i<26;i++)
	{
		array[i] = -1;
	}
 i=0;
	while(word[i] != '\0')
 {
	for(j=97;j<=122;j++)
	{
		if(word[i] == j)
		{
			if(array[j - 97] == -1)
			{
			array[j - 97] = i;
			}
			}
	}
		i++;
 }
	for(i=0;i<26;i++)
	{
		printf("%d ",array[i]);
	}
}
