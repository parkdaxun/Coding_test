#include<stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b<=c) 
	{
		printf("»ï°¢Çü¾Æ´Ô");
		return 0; 
	}
	
	if(a<=b && b<=c)
	{
		if(a==b && b==c && c==a)
		{
			printf("Á¤»ï°¢Çü");
		} 
		else if((a==b && b<c) || (a<b && b==c))
		{
			printf("ÀÌµîº¯»ï°¢Çü");
		} 
		else if(a*a + b*b == c*c)
		{
			printf("Á÷°¢»ï°¢Çü");
		} 
		else
		{
			printf("»ï°¢Çü");
		}
	}
	return 0;
}
