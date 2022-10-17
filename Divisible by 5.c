//program for number divisible by 5
#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter a Number: ");
    scanf("%i",&a);
    n=a%5;
    if(a%5==0)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Number is not divisible by 5 and rem is %i ",n);
    }
}