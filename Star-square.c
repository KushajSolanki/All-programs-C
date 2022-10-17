//program for star square
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter dimensions of Diagram: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
}
