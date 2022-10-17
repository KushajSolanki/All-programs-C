//program for table(for)
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a Number: \n");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		printf("%dX%d = %d\n",i,n,i*n);
	}
}

