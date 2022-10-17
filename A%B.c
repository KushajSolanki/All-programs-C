//program for if-else
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter 2 numbers- ");
	scanf("%i%i",&a,&b);
	if(a>b)
	{
		printf("A is greater than B");
	}
	else if(a<b)
	{
		printf("B is greatert than A");
	}
	else
	{
		printf("A is equal to B");
	}
}