#include<stdio.h>
#include<stdlib.h>

search(int n)
{
	if(n<=1){
        return 1;
    }
    else{
        return search(n-2) + search(n-1);
    }
}

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int result = search(n);
	printf("%d", result);
	return 0;
}
