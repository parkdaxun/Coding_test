#include<stdio.h>

int main(void)
{
	int num, arr[19][19] = {0};
	int a, b;
	
	scanf("%d", &num);
	for(int i=0; i<num; i++)
	{
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
	}
	
	for(int i=1; i<=19; i++)
	{
		for(int j=1; j<=19; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
