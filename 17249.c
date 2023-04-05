#include <stdio.h>
int main (void)
{
	char a1[1001];
	scanf("%s",a1);
	int j=0;
	int left=0,right=0;
	 while(a1[j] != '(')
	 {
		 if(a1[j] == '@')
		 {
			 left ++;
		 }
		 j++;
	 }
	j+=4;
	while(a1[j] != '\0')
	{
		if(a1[j] == '@')
		{
			right ++;
		}
		j++;
	}
	printf("%d %d",left,right);
}