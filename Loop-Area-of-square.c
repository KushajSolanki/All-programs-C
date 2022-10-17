//program for while loop
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter a Number: \n");
	scanf("%d",&n);
	do
	{
	printf(" Area of square with side %d is %d\n",i,i*i);
	i++;
	}
	while(i<=n);
}
