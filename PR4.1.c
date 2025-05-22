#include <stdio.h>

int main()
{
    int i, j;
    for( i=1 ; i<=5 ; i++ )
    {
    	for( j=21 ; j < 21 + i ; j++)
    	{
    		printf("%d ",20 + j);
		}
		printf("\n");
	}
}
/*
output:41
       41 42
       41 42 43
       41 42 43 44
       41 42 43 44 45
*/
