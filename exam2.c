#include<stdio.h>

int main()
{
	int a[100],n,i,max;
	
	printf("enter number of elements: ");
	scanf("%d",&n);
	
	printf("enter elements:\n");
	
	for(i = 0;i < n;i++)
	scanf("%d",&a[i]);
	
	max = a[0];
	
	for(i = 1;i < n ; i++)
	if(a[i] > max)
	max = a[i];
	
	printf("largest element = %d\n",max);
}
/*
input:enter number of elements:5
enter elements:12
13
14
15
16
output:largest element = 16
*/