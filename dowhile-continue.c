//program for do while
#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	do
	{
		printf("\nEnter 2 Numbers: \n");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("Addition + %d",c);
		
		printf("\nDo you want to continue : Press Y\n");
		scanf("\n%c",&ch);
	}
	while(ch=='Y');
}
