//program for factors
#include<stdio.h>
int main()
{
	int i=2,n;
	printf("Enter a Number: \n");
	scanf("%d",&n);
	while(i<=n/2)
	{
	if(n%i==0)
    	{
			printf("Factors are: %d\n",i);
    	}
    else
	    {
	    	printf("Prime Number");
	    	break;
		}	
    i++;
	}
}
