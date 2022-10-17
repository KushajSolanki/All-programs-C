//program for loop
#include<stdio.h>
main()
{
	int i,j,n=1,s;
	printf("Enter a Number: ");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n++);
		}
		printf("\n");
	}
}
