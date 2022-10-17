//program for switch case
#include<stdio.h>
int main()
{
	float r,s,l,b,h,pi=3.14;
	int ans,option;
	do
	{
		printf("\n1: Area of Circle");
		printf("\n2: Area of Square");
		printf("\n3: Area of Rectangle");
		printf("\n4: Area of Triangle");
		printf("\nEnter an Option: \n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter Radius of Circle: \n");
				scanf("%f",&r);
				printf("Area of Circle is = %f",pi*r*r);
				break;
			case 2:
			    printf("Enter Side of Square: \n");
				scanf("%f",&s);
				printf("Area of Square is = %f",s*s);
				break;
		    case 3:
			    printf("Enter Length and Breadth of Rectangle: \n");
				scanf("%f%f",&l,&b);
				printf("Area of Rectangle is = %f",l*b);
				break;
			case 4:
				printf("Enter Height and Base of Triangle: \n");
				scanf("%f%f",&h,&b);
				printf("Area of Triangle = %f",0.5*h*b);
				break;
			default:
			    printf("Invalid");	
	    }
	    printf("\n\nDo you want to continue : Press 1\n");
	    scanf("%d",&ans);
	}
	while(ans==1);
}

