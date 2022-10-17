//program for factorial(for)
#include<stdio.h>
int main()
{
	int i,f,n;
	printf("Enter a Number: \n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Factorial is %d",f);
}
