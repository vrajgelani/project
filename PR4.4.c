#include <stdio.h>

int main() 
{
    int n=5; 
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
           
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

}
/*
output:1 0 1 0 1
       0 1 0 1
       1 0 1
       0 1
       1
*/
