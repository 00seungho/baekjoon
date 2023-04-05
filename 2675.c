#include <stdio.h>
int main (void)
{

	int t,i,j,r;
	scanf("%d",&t);
	char word[t][21];
	int array[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&array[i]);
		fflush(stdin);
		scanf("%s",word[i]);
		fflush(stdin);
}
	for(i=0;i<t;i++)
	{
		r=0;
		while(word[i][r] != '\0')
		{
		for(j=0;j<array[i];j++)
		{
			printf("%c",word[i][r]);
		}
			r++;
		}
		printf("\n");
	}
}