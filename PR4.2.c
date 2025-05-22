#include <stdio.h>

int main()
{
    int i, j,num=11;
    int rows=4;
    
    for( i=1 ; i<=rows; i++ )
    {
    	for( j=1; j <= i ; j++)
    	{
    		printf("%d ",num);
    		num++;
		}
		printf("\n");
	}
}
/*
output:11
       12 13
       14 15 16
       17 18 19 20
*/