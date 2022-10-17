//program for perimeter and area of square
#include<stdio.h>
main()
{
	float P,A,s;
	printf("Enter the Side of Square: ");
	scanf("%f",&s);
	P=4*s;
	A=s*s;
	printf("Perimeter of the Square is %f and Area is %f",P,A);
}

