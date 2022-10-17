//program for calculating percentage
#include<stdio.h>
int main()
{
    float percentage, a, b;
    printf("Enter recieved out of total: ");
    scanf("%f%f",&a,&b);
    percentage = a/b*100;
    printf("Percentage is %f",percentage);
}