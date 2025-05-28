#include <stdio.h>

int main() 
{
    int row, col, i, j, largest;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter array's elements:\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    largest = arr[0][0];

    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            if (arr[i][j] > largest) 
			{
                largest = arr[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", largest);

}
/*
input:Enter the array's row size: 3
      Enter the array's column size: 3
      Enter array's elements:
      a[0][0] = 2
      a[0][1] = 7
      a[0][2] = 1
      a[1][0] = 3
      a[1][1] = 5
      a[1][2] = 4
      a[2][0] = 8
      a[2][1] = 9
      a[2][2] = 6
output:The largest element is: 9
*/
