#include<stdio.h>
#include<stdlib.h>

int memo[100001] = {0, 1, 2, 4};

int search(int n)
{
	if(memo[n])
        return memo[n];
    
    return memo[n] = (search(n-2) + search(n-1) + search(n-3))%1000;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int result = search(n);
	printf("%d", result);
	return 0;
}
