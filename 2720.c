#include <stdio.h> 

int main()
{
	int T, Quarter, Dime,Nuckel,Penny,C;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &C);
		for (Quarter = 0; C >= 25; C = C - 25)
		{
			Quarter++;
		}
		for (Dime = 0; C >= 10; C = C - 10)
		{
			Dime++;
		}
		for (Nuckel = 0; C >= 5; C = C - 5)
		{
			Nuckel++;
		}
		for (Penny = 0; C >= 1; C--)
		{
			Penny++;
		}
		printf("%d %d %d %d\n",Quarter,Dime,Nuckel,Penny);
	}

	return 0;
}