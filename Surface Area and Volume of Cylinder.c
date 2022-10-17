//program for surface area and volume of cylinder
#include<stdio.h>
main()
{
	float S,V,r,h,pi=3.141592;
	printf("Enter Radius and Height of Cyclinder: ");
	scanf("%f%f",&r,&h);
	S=2*pi*r*r+2*pi*r*h;
	V=pi*r*r*h;
	printf("Surface Area of Cylinder is %f and Volume is %f",S,V);
}
