//program for switch case
#include<stdio.h>
int main()
  {
	int option;
	printf("\n1:Computer Science");
	printf("\n2:Information Technology");
	printf("\n3:Electronics");
	printf("\n4:Mechanical");
	printf("\nEnter Option: \n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
	       printf("Computer Science");
	       break;
	    case 2:
           printf("Information Technology");
           break;
        case 3:
		   printf("Electronics");
		   break;
		case 4:
		   printf("Mechanical");
		   break;
		default:
		   printf("Invalid");       
	}
	
 }
 
