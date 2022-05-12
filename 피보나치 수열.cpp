#include<stdio.h>

int count=0, n;

int know(int s)
{
	printf("%d ", s);
	count++; 
	s+=s;
	know(s);
	
	if(count==n) return s;
}

int main(void)
{
	int n;
	
	scanf("%d", &n);
	int num=1;
	
	int result = know(num);
	printf("%d", result);
	
	return 0;
}
