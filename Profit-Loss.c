//program for profit and loss
#include<stdio.h>
main()
{
	int p,l,Sellingprice,Costprice;
	printf(" Enter Sellingprice and Costprice ");
	scanf("%i%i",&Sellingprice,&Costprice);
	p=Sellingprice-Costprice;
	l=Costprice-Sellingprice;
	if(Sellingprice>Costprice)
	{
		printf("Profit by %i",p);
	}
	else if(Sellingprice<Costprice)
	{
		printf("Loss by %i",l);
	}
	else 
	{
		printf(" No Profit or Gain");
	}
}

