#include<stdio.h>

int main()
{
	char ch;
	
	printf("enter a ch: ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case'a':case'e':case'i':case'o':case'u':
		case'A':case'E':case'I':case'O':case'U':
			
			printf("Vowel\n");
			
			break;
			
			default:
				printf("consonant\n");
	}
}
/*
input:enter a ch:a
output:vowel
*/