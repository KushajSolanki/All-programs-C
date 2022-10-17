//program for if-else
#include<stdio.h>
main()
{
	int age;
	printf("Enter age ");
	scanf("%i",&age);
	if (age>=18 && age<=60)
	{
		printf("Valid");
	}
	else 
	{
		printf("Invalid");
	}
}
