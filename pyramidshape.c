//program for shape
#include<stdio.h>
int main()
{
    int i,j,n,c;
    printf("Enter the Dimension - Row and Column of the Pyramid : \n");
    scanf("%d",&n);
    printf("Enter the Character : \n");
    scanf("%d",&c);
    printf("Diagram: \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",c);
        }
        printf("\n");
    }

}