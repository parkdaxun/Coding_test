#include<stdio.h>

int count=1, max=0;
int a, b;

int find(int b)
{
	if(max<b) max=b;
	if(a==b) return 0;
	
	if(b%2!=0)
	{
		count++;
		return 3*b+1;	
	} 
	else if(b%2==0)
	{
		count++;
		return b/2;	
	} 
}

int main(void)
{	
	scanf("%d %d", &a, &b);
	find(b);
	
	printf("%d %d", count, max);
	
	return 0;
}
