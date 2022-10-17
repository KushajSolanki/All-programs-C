//program for star shape upside down
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter dimension of triangle: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
