//program for surface area and volume of cone
#include<stdio.h>
main()
{
	float S,V,r,h,l,pi=3.141592;
	printf("Enter Radius ,Height and Length of Cone: ");
	scanf("%f%f%f",&r,&h,&l);
	S=pi*r*l+pi*r*r;
	V=0.333333*pi*r*r*h;
	printf("Surface Area of Cone is %f and Volume is %f",S,V);
}
