#include<stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b<=c) 
	{
		printf("�ﰢ���ƴ�");
		return 0; 
	}
	
	if(a<=b && b<=c)
	{
		if(a==b && b==c && c==a)
		{
			printf("���ﰢ��");
		} 
		else if((a==b && b<c) || (a<b && b==c))
		{
			printf("�̵�ﰢ��");
		} 
		else if(a*a + b*b == c*c)
		{
			printf("�����ﰢ��");
		} 
		else
		{
			printf("�ﰢ��");
		}
	}
	return 0;
}
