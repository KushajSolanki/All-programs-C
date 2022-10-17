//program for if-else
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("It is a Capital Letter");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("It is a Small Letter");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("It is a Digit");
	}
	else
	{
		printf("It is a special character");
	}
}
