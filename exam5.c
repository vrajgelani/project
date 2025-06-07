#include<stdio.h>

int main()
{
	int i , j;
	
	for(i = 1;i <= 5;i++)
	{
		for(j = 1;j <= i;j++)
		printf(" %d",i * i);
		printf("\n\n");
	}
}
/*
output:
1
4 4
9 9 9
16 16 16 16
25 25 25 25 25
*/