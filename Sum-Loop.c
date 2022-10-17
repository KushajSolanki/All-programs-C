//program for addition-factorial
#include<stdio.h>
int main()
{
	int  i=1,n,s=0;
	printf("Enter a Number: \n");
	scanf("%d",&n);
	do
	{
		s=s+i;
		i++;
	}
	while(i<=n);
	printf("Addition is %d",s);
}
