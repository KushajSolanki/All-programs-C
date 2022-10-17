//program for circumferance and area of circle
#include<stdio.h>
main()
{
	float C,A,r,pi=3.141592;
	printf("Enter the Radius of Circle: ");
	scanf("%f",&r);
	C=2*pi*r;
	A=pi*r*r;
	printf("The Circumferance of the Circle is %f and Area of the Circle is %f",C,A);
}