#include<stdio.h>

void start(int n)
{
	if(n==0) return;
	start(n-1);
	printf("%d\n", n);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	start(n);
	return 0; 
} 
