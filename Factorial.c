//program for multiplication factorial
#include<stdio.h>
int main()
{
	int i=1,n,f=1;
	printf("Enter a Number: \n");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("Factorial is %d",f);
}
