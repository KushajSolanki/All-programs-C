//program for table array
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter 5 Numbers: \n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%dX%d = %d",a[i],i,a[i]*i);
    }
}