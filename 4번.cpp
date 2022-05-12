#include<stdio.h>

typedef struct info
{
	char name;
	int score;
} inf;

inf arr[50];

int change(int i, int j)
{
	int scoretemp;
	char nametemp;
	
	scoretemp = arr[i].score;
	arr[i].score = arr[j].score;
	arr[j].score = scoretemp;
	
	scoretemp = arr[i].name;
	arr[i].name = arr[j].name;
	arr[j].name = scoretemp;
}

int main(void)
{
	int num;
	
	scanf("%d", &num);
	for(int i=0; i<num; i++)
	{
		scanf("%s", arr[i].name);
		scanf(" %d", &arr[i].score);
	}
	
	scanf("%s", arr[2].name);
	
	return 0;
} 
