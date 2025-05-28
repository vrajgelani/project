#include <stdio.h>

int main() 
{
    int rows, cols;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int a[rows][cols];

    printf("\nEnter array's elements:\n");
    for(int i = 0; i < rows; i++) 
	{
        for(int j = 0; j < cols; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int rowNum;
    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for(int j = 0; j < cols; j++) 
	{
        printf("%d", a[rowNum][j]);
        if (j < cols - 1)
            printf(", ");
        rowSum += a[rowNum][j];
    }
    printf("\nThe sum of a row %d: %d\n", rowNum, rowSum);

    int colNum;
    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for(int i = 0; i < rows; i++) 
	{
        printf("%d", a[i][colNum]);
        if (i < rows - 1)
            printf(", ");
        colSum += a[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

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
output:Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10

Enter column number: 2
Elements of column 2: 1, 4, 6
The sum of column 2: 11

*/
