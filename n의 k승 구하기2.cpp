#include<stdio.h>

int n, k, count=0;

int main(void)
{
	scanf("%d %d", &n, &k);
	
	for(int i=1; i<k; i++)
	{
		n*=n;
	}
	
	printf("%d", n);
	return 0;
}
