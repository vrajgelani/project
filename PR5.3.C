#include <stdio.h>

int main() 
{
    int size, i, j;

    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int arr[size][size], transpose[size][size];

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            transpose[j][i] = arr[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
/*
input:Enter the array's row & column size: 3
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
output:Transpose of the matrix:
2 3 8
4 5 2
1 4 6
*/
