#include<stdio.h>

void reverse(char str[])
{
	int i , len = 0;
	 
	while(str[len] != '\0') len++;
	
	for(i = len - 1;i >= 0; i--)
	printf("%c",str[i]);
}

int main()
{
	char str[100];
	printf("enter a string:");
	scanf("%s",str);
	printf("reversed string: ");
	reverse(str);
}
/*
input:hello
output:olleh
*/