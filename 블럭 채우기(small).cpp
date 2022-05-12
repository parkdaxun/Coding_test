#include<stdio.h>
int memo[61]={0, 1, 2, 3, 5, 8};

int search(int n)
{
	if(memo[n])
        return memo[n];
    
    return memo[n] = search(n-2) ;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int result = search(n);
	printf("%d", result);
	
	return 0;
}
