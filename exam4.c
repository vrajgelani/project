#include<stdio.h>

int main()
{
	int arr[100],n,i;
	int *ptr;
	
	printf("enter number of elements:");
	scanf("%d",&n);
	
	printf("enter %d element:\n",n);
	for(i = 0;i < n;i++)
	scanf("%d",&arr[i]);
	
	ptr = arr;
	
	for(i = 0;i < n;i++)
	printf("square of %d = %d\n");
	 
	 ptr++;
	 
}
/*
intput:enter number of elements:2
enter 2 element :
1
2
output:square of 1385232896 = 1385257857
       square of 1385232944 = 1385257280
*/