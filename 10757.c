#include <stdio.h>
int main (void)
{
	int unsigned long long x;
	int unsigned long long y;
	scanf("%llud %llud",&x,&y);
	x += y;
	printf("%llud",x);
}