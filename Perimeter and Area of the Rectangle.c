//program for perimeter and area of rectangle
#include<stdio.h>
main()
{
	float P,A,l,b;
	printf("Enter Length and Breadth of the Rectangle: ");
	scanf("%f%f",&l,&b);
	P=2*l+2*b;
	A=l*b;
	printf("Perimeter of rectangle is %f and Area is %f",P,A);
}
