//program for surface area and volume of cube
#include<stdio.h>
main()
{
	float S,V,s;
	printf("Enter the side of Cube: ");
	scanf("%f",&s);
	S=6*s*s;
	V=s*s*s;
	printf("Surface area of cube is %f and Volume is %f",S,V);
}
