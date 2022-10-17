//program for switch case
#include<stdio.h>
int main()
{
	int a,b,c,option,ans;
	do
	{
		printf("\n1:Addition");
		printf("\n2:Subtraction");
		printf("\n3:Multiplication");
		printf("\n4:Division");
		printf("\nEnter Option: \n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter 2 Numbers: \n");
				scanf("%d%d",&a,&b);
				c=a+b;
				printf("Addition is %d",c);
				break;
			case 2:
				printf("Enter 2 Numbers: \n");
				scanf("%d%d",&a,&b);
				c=a-b;
				printf("Subtraction is %d",c);
				break;
			case 3:
			    printf("Enter 2 Numbers: \n");
				scanf("%d%d",&a,&b);
				c=a*b;
				printf("Multiplication is %d",c);
				break;	
	        case 4:
	        	printf("Enter 2 Numbers: \n");
				scanf("%d%d",&a,&b);
				c=a/b;
				printf("Division is %d",c);
				break;
		    default:
		    	printf("Invalid");
		}
		    printf("\nDo you want to continue : Press 1\n");
	 	    scanf("%d",&ans);
	}
	while(ans==1);
}
