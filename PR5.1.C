#include <stdio.h>

int main() 
{
    int size, i;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Negative elements from an Array: ");
    for (i = 0; i < size; i++) 
	{
        if (arr[i] < 0) 
		{
            printf("%d", arr[i]);
            if (i < size - 1) printf(", ");
        }
    }

}
/*
input:Enter the array's size: 5
      Enter array's elements:
      a[0] = 2
      a[1] = -4
      a[2] = 1
      a[3] = -3
      a[4] = -5
output:Negative elements from an Array: -4, -3, -5

*/