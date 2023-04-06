#include <stdio.h> 
int main(void)
{
	int N, M;
	while (1)
	{
		scanf("%d %d", &N, &M);
			if (N == 0 && M == 0)
			{
				break;
		}
			else
			{
				if (M > N && M % N ==0) // M 이 N보다 클때, N이 M의 약수인지 판별
				{
					printf("factor\n");
				}
				else if (N > M && N % M == 0) //N 이 M보다 클 때 M이 N의 약수인지 판별
				{
					printf("multiple\n");
				}
				else //둘다 아닐 경우
				{
					printf("neither\n");
				}
			}
	}
}