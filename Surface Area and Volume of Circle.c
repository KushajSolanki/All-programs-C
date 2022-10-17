//program for surface area and volume of sphere
#include<stdio.h>
main()
{
	float pi=3.141592,S,V,r;
	printf("Enter the Radius of Sphere: ");
	scanf("%f",&r);
	S=4*pi*r*r;
	V=4/3*pi*r*r*r;
	printf("Surface Area of Sphere is %f and Volume is %f",S,V);
}
