#include<stdio.h>

int main()
{
	int number,count=0;
	
	printf("enter a number:");
	scanf("%d",&number);
	
	if(number<0)
	{
		number=-number;
	}
	
	if(number == 0)
	{
		count /= 10;
	}
	else
	{
		while(number!=0)
		{
			number/=10;
			count++;
		}
	}
	printf("total number of digits:%d\n",count);
}
/*
input:123456
output:6
*/