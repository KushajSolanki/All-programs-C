//program for while-loop
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter a Number: \n");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d\n",n*i);
		i++;
	}
}
