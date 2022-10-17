//program for surface area and volume of cuboid
#include<stdio.h>
main()
{
	float S,V,l,b,h;
	printf("Enter Length , Breadth and Height of Cuboid: ");
	scanf("%f%f%f",&l,&b,&h);
    S=2*l*b+2*b*h+2*h*l;
    V=l*b*h;
    printf("Surface Area of the Cuboid is %f and Volume is %f",S,V);
}
