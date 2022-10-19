#include<stdio.h>
int main()
{
	int i,j,n,y,option;
	do
	{
		printf("\nEnter the dimension of the Diagram : \n");
		scanf("%d",&n);
		printf("\nTypes of diagram :\n");
		printf("\n1: Ascending Triangle");
		printf("\n2: Descending Triangle");
		printf("\n3: Square");
		printf("\n\nSelect Your Option : \n");
		scanf("%d",&option);
		printf("Diagram-\n\n");
		switch(option)
		{
			case 1:
				{
					for(i=1;i<=n;i++)
					{
						for(j=1;j<=i;j++)
						{
							printf("*");
						}
						printf("\n");
					}
					break;
				}
			case 2:
			    {
			    	for(i=1;i<=n;i++)
			    	{
			    		for(j=i;j<=n;j++)
			    		{
			    			printf("*");
						}
						printf("\n");
					}
					break;
				}
			case 3:
			    {
			    	for(i=1;i<=n;i++)
			    	{
			    		for(j=1;j<=n;j++)
			    		{
			    			printf("*");
						}
						printf("\n");
					}
					break;
				}
			default:
			   {
			   	   printf("Invalid");
			   }	
		}
		printf("\nDo you want to continue: Press 4\n");
		scanf("%d",&y);
	}
	while(y==4);
}
