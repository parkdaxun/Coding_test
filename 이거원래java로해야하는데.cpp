#include<stdio.h>

int main(void)
{
	int arr[5]={2,1,3,4,1};
    int total[100]={0};
    int max=0;

    for(int i=0; i<=5; i++)
    {
        for(int j=0; j<=5; j++)
        {
            if(i != j)
            {
                total[arr[i]+arr[j]]=1;
                if(max<arr[i]+arr[j]) max = arr[i]+arr[j];
            }
        }
    }

    for(int i=1; i<max; i++)
    {
        if(total[i]==1) printf("%d ", i);
    }
    
    return 0;
}
