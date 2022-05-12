#include<stdio.h>

long long n, k, count=0;

int start(int num) 
{
	if(count == k-1) return num;
	
	num *= n;
	
	count++;
	num %=1000000007;
	
	start(num); 
}

int main(void)
{
	scanf("%lld %lld", &n, &k);
	
	double num=n;
	printf("%lld", start(num));
	return 0;
}
