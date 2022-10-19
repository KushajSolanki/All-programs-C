//program for binary counts
#include<stdio.h>
int main()
{
	int a[5],i,n,count=0;
	printf("Enter 5 Numbers: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a number u want to find: \n");
	scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
		if(a[i]==n)
		{
			count++;
		}
	}
	printf("Count is %d ",count);
}
